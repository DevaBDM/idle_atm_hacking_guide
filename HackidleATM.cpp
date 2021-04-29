#include <iostream>
#include <array>

//pin length (currently there are 2 types og pin 6 and 4)
constexpr unsigned int pinL{6};
//all possible number that can be tried on each bar
namespace poss
{
  enum Numbers
  {
    zero,
    one,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    All_possible,
    None
  };
}

enum
{
  first,
  second,
  third,
  fourth,
  fifth,
  sixth
};

struct found_info
{
  //Check whether a number found or not
  bool chk{};
  
  //number found
  poss::Numbers num{poss::None};
};

struct Bar
{
  //store info about found number
  //like is it found or not
  //and what number found
  found_info fnd{};
  
  //stores list of numbers trued on the column
  //and how number have tried
  bool tried[poss::All_possible]{};
};

void printBar(const std::array<Bar,pinL>& temp)
{
  for (const auto& ele : temp)
  {
    if (ele.fnd.chk)
      std::cout << ele.fnd.num << '|';
    else
      std::cout << "_|";
   {
     int index{};
   for (const auto& elem : ele.tried)
    {
      if (elem)
        std::cout << static_cast<poss::Numbers>(index) << ',';
        ++index;
    }
   }
  std::cout << '\n';
  }
  
}

std::string askUserForResult(const Bar* temp)
{
  char result[6]{};
  while (true)
  {
  std::cout << "Enter Result of \"" << temp << '\"';
  std::cin.getline(result,pinL);
  if (std::cin.fail())
    std::cin.clear();
  }
  return result;
}

void starter()
{
  
}

void checkprintBar()
{
  std::array<Bar, pinL> game{
    {
      {
        true,poss::six,
        false,false,true
      },
      {
        {true,poss::five},
        {true,false,false,false,false,true,true,false,true,false}
      },
      {
        {true,poss::nine},
        {true,true,false,true,false,true,true,false,false,false}
      },
      {
        {true,poss::zero},
        {true,false,false,false,false,true,true,false,true,false}
      },
      {
        {},
        {true,false,false,true,false,true,true,false,false,true}
      },
      {
        {true,poss::one},
        {false,false,false,false,true,false,true,false,true,false}
      },
    }
    };
    
  printBar(game);
}

int main()
{
  std::array<Bar, pinL> game;
  
  checkprintBar();
  //printBar(game);
}