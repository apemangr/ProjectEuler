#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

const int ROYAL_FLUSH = 9000000;
const int STRAIGHT_FLUSH = 8000000;
const int FOUR_OF_A_KIND = 7000000;
const int FULL_HOUSE = 6000000;
const int FLUSH = 5000000;
const int STRAIGHT = 4000000;
const int SET = 3000000;
const int TWO_PAIRS = 2000000;
const int ONE_PAIR = 1000000;

std::map<char, int> Card_Ranks{
    {'2', 1}, {'3', 2}, {'4', 3},  {'5', 4},  {'6', 5},  {'7', 6}, {'8', 7},
    {'9', 8}, {'T', 9}, {'J', 10}, {'Q', 11}, {'K', 12}, {'A', 13}};

std::vector<std::string> Hands1;
std::vector<std::string> Hands2;

void fillHands();
bool isPair(std::string Hand);
bool is2Pair(std::string Hand);
bool isThree(std::string Hand);
bool isStraight(std::string Hand);
bool isFlush(std::string Hand);
bool isFullHouse(std::string Hand);
bool isFourKind(std::string Hand);
bool isStraightFlush(std::string Hand);
int highest_card(std::string Hand);
bool isRoyalFlush(std::string Hand);
int valueHand(std::string Hand);

int main(int argc, char *argv[]) {

  fillHands();
  int player1WINS{0};
  for (int i = 0; i < 1000; i++) {
    if (valueHand(Hands1[i]) > valueHand(Hands2[i]))
      player1WINS++;
  }
  std::cout << "The fucking result of this fucking challenge is: "
            << player1WINS << std::endl;
}

void fillHands() {
  std::ifstream file("poker.txt");
  std::string line;

  while (std::getline(file, line)) {
    line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end());
    Hands1.push_back(line.substr(0, 10));
    Hands2.push_back(line.substr(10));
  }
  file.close();
}
bool isPair(std::string Hand) {
  if (isFourKind(Hand) || isFullHouse(Hand) || isThree(Hand) || is2Pair(Hand))
    return false;

  bool a, b, c, d;
  std::vector<int> rank_card;

  rank_card.push_back(Card_Ranks[Hand[0]]);
  rank_card.push_back(Card_Ranks[Hand[2]]);
  rank_card.push_back(Card_Ranks[Hand[4]]);
  rank_card.push_back(Card_Ranks[Hand[6]]);
  rank_card.push_back(Card_Ranks[Hand[8]]);

  std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

  a = rank_card[0] == rank_card[1];
  b = rank_card[1] == rank_card[2];
  c = rank_card[2] == rank_card[3];
  d = rank_card[3] == rank_card[4];

  return (a || b || c || d);
}

bool is2Pair(std::string Hand) {
  if (isFourKind(Hand) || isFullHouse(Hand) || isThree(Hand))
    return false;

  bool a, b, c;
  std::vector<int> rank_card;

  rank_card.push_back(Card_Ranks[Hand[0]]);
  rank_card.push_back(Card_Ranks[Hand[2]]);
  rank_card.push_back(Card_Ranks[Hand[4]]);
  rank_card.push_back(Card_Ranks[Hand[6]]);
  rank_card.push_back(Card_Ranks[Hand[8]]);

  std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

  a = rank_card[0] == rank_card[1] && rank_card[2] == rank_card[3];
  b = rank_card[0] == rank_card[1] && rank_card[3] == rank_card[4];
  c = rank_card[1] == rank_card[2] && rank_card[3] == rank_card[4];

  return (a || b || c);
}

bool isThree(std::string Hand) {
  bool a, b, c;
  std::vector<int> rank_card;

  rank_card.push_back(Card_Ranks[Hand[0]]);
  rank_card.push_back(Card_Ranks[Hand[2]]);
  rank_card.push_back(Card_Ranks[Hand[4]]);
  rank_card.push_back(Card_Ranks[Hand[6]]);
  rank_card.push_back(Card_Ranks[Hand[8]]);

  std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

  a = rank_card[0] == rank_card[1] && rank_card[1] == rank_card[2];
  b = rank_card[1] == rank_card[2] && rank_card[2] == rank_card[3];
  c = rank_card[2] == rank_card[3] && rank_card[3] == rank_card[4];

  return (a || b || c);
}

bool isStraight(std::string Hand) {
  int test_rank;
  std::vector<int> rank_card;

  rank_card.push_back(Card_Ranks[Hand[0]]);
  rank_card.push_back(Card_Ranks[Hand[2]]);
  rank_card.push_back(Card_Ranks[Hand[4]]);
  rank_card.push_back(Card_Ranks[Hand[6]]);
  rank_card.push_back(Card_Ranks[Hand[8]]);

  std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

  test_rank = rank_card[0] + 1;

  for (int i = 1; i < 5; i++) {
    if (rank_card[i] != test_rank)
      return false;
    test_rank++;
  }

  return true;
}

bool isFlush(std::string Hand) {

  std::vector<char> rank_card;

  rank_card.push_back(Hand[1]);
  rank_card.push_back(Hand[3]);
  rank_card.push_back(Hand[5]);
  rank_card.push_back(Hand[7]);
  rank_card.push_back(Hand[9]);

  std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

  return (rank_card[0] == rank_card[4]);
}

bool isFullHouse(std::string Hand) {
  bool a, b;
  std::vector<int> rank_card;

  rank_card.push_back(Card_Ranks[Hand[0]]);
  rank_card.push_back(Card_Ranks[Hand[2]]);
  rank_card.push_back(Card_Ranks[Hand[4]]);
  rank_card.push_back(Card_Ranks[Hand[6]]);
  rank_card.push_back(Card_Ranks[Hand[8]]);

  std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

  a = rank_card[0] == rank_card[1] && rank_card[1] == rank_card[2] &&
      rank_card[3] == rank_card[4];
  b = rank_card[0] == rank_card[1] && rank_card[2] == rank_card[3] &&
      rank_card[3] == rank_card[4];

  return (a || b);
}

bool isFourKind(std::string Hand) {
  bool a, b;
  std::vector<char> rank_card;

  rank_card.push_back(Card_Ranks[Hand[0]]);
  rank_card.push_back(Card_Ranks[Hand[2]]);
  rank_card.push_back(Card_Ranks[Hand[4]]);
  rank_card.push_back(Card_Ranks[Hand[6]]);
  rank_card.push_back(Card_Ranks[Hand[8]]);

  std::sort(rank_card.begin(), rank_card.end(), std::less<int>());
  a = rank_card[0] == rank_card[1] && rank_card[1] == rank_card[2] &&
      rank_card[2] == rank_card[3];

  b = rank_card[1] == rank_card[2] && rank_card[2] == rank_card[3] &&
      rank_card[3] == rank_card[4];

  return (a || b);
}

bool isStraightFlush(std::string Hand) {
  return isStraight(Hand) && isFlush(Hand);
}

int highest_card(std::string Hand) {
  std::vector<int> rank_card;

  rank_card.push_back(Card_Ranks[Hand[0]]);
  rank_card.push_back(Card_Ranks[Hand[2]]);
  rank_card.push_back(Card_Ranks[Hand[4]]);
  rank_card.push_back(Card_Ranks[Hand[6]]);
  rank_card.push_back(Card_Ranks[Hand[8]]);

  std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

  return rank_card[4];
}

bool isRoyalFlush(std::string Hand) {
  return isStraight(Hand) && isFlush(Hand) && (highest_card(Hand) == 13);
}

int valueHand(std::string Hand) {
  int hc = highest_card(Hand);
  // if(isRoyalFlush(Hand))
  //     return ROYAL_FLUSH + hc;
  // else
  if (isStraightFlush(Hand))
    return STRAIGHT_FLUSH + hc;
  else if (isFourKind(Hand)) {
    std::vector<int> rank_card;

    rank_card.push_back(Card_Ranks[Hand[0]]);
    rank_card.push_back(Card_Ranks[Hand[2]]);
    rank_card.push_back(Card_Ranks[Hand[4]]);
    rank_card.push_back(Card_Ranks[Hand[6]]);
    rank_card.push_back(Card_Ranks[Hand[8]]);

    std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

    return FOUR_OF_A_KIND + rank_card[3];
  } else if (isFullHouse(Hand)) {
    std::vector<int> rank_card;

    rank_card.push_back(Card_Ranks[Hand[0]]);
    rank_card.push_back(Card_Ranks[Hand[2]]);
    rank_card.push_back(Card_Ranks[Hand[4]]);
    rank_card.push_back(Card_Ranks[Hand[6]]);
    rank_card.push_back(Card_Ranks[Hand[8]]);

    std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

    return FULL_HOUSE + rank_card[2];
  } else if (isFlush(Hand)) {
    return FLUSH + hc;
  } else if (isStraight(Hand)) {
    return STRAIGHT + hc;
  } else if (isThree(Hand)) {
    std::vector<int> rank_card;

    rank_card.push_back(Card_Ranks[Hand[0]]);
    rank_card.push_back(Card_Ranks[Hand[2]]);
    rank_card.push_back(Card_Ranks[Hand[4]]);
    rank_card.push_back(Card_Ranks[Hand[6]]);
    rank_card.push_back(Card_Ranks[Hand[8]]);

    std::sort(rank_card.begin(), rank_card.end(), std::less<int>());

    return SET + rank_card[2];
  } else if (is2Pair(Hand)) {
    int val = 0;
    std::vector<int> h;

    h.push_back(Card_Ranks[Hand[0]]);
    h.push_back(Card_Ranks[Hand[2]]);
    h.push_back(Card_Ranks[Hand[4]]);
    h.push_back(Card_Ranks[Hand[6]]);
    h.push_back(Card_Ranks[Hand[8]]);

    std::sort(h.begin(), h.end(), std::less<int>());
    if (h[0] == h[1] && h[2] == h[3])
      val = 14 * 14 * h[2] + 14 * h[0] + h[4];
    else if (h[0] == h[1] && h[3] == h[4])
      val = 14 * 14 * h[3] + 14 * h[0] + h[2];
    else
      val = 14 * 14 * h[3] + 14 * h[1] + h[0];

    return TWO_PAIRS + val;

  } else if (isPair(Hand)) {
    int val = 0;
    std::vector<int> h;

    h.push_back(Card_Ranks[Hand[0]]);
    h.push_back(Card_Ranks[Hand[2]]);
    h.push_back(Card_Ranks[Hand[4]]);
    h.push_back(Card_Ranks[Hand[6]]);
    h.push_back(Card_Ranks[Hand[8]]);

    std::sort(h.begin(), h.end(), std::less<int>());

    if (h[0] == h[1])
      val = 14 * 14 * 14 * h[0] + +h[2] + 14 * h[3] + 14 * 14 * h[4];
    else if (h[1] == h[2])
      val = 14 * 14 * 14 * h[1] + +h[0] + 14 * h[3] + 14 * 14 * h[4];
    else if (h[2] == h[3])
      val = 14 * 14 * 14 * h[2] + +h[0] + 14 * h[1] + 14 * 14 * h[4];
    else
      val = 14 * 14 * 14 * h[3] + +h[0] + 14 * h[1] + 14 * 14 * h[2];
    return ONE_PAIR + val;

  } else {
    int val = 0;
    std::vector<int> h;

    h.push_back(Card_Ranks[Hand[0]]);
    h.push_back(Card_Ranks[Hand[2]]);
    h.push_back(Card_Ranks[Hand[4]]);
    h.push_back(Card_Ranks[Hand[6]]);
    h.push_back(Card_Ranks[Hand[8]]);

    std::sort(h.begin(), h.end(), std::less<int>());

    val = h[0] + 14 * h[1] + 14 * 14 * h[2] + 14 * 14 * 14 * h[3] +
          14 * 14 * 14 * 14 * h[4];

    return val;
  }
}
