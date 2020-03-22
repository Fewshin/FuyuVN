#include <string>

struct _pathPoints {
  std::string name;
  int points;
};
typedef struct _pathPoints pathPoints;

struct _save {
  pathPoints* choiceScore;
};