#pragma once

#include <string>

using namespace std;

class Cutie {

protected:

    string description;

    int cuteness_rating;

public:

    Cutie(const string& description, int cuteness_rating);

    virtual ~Cutie() = default;

    virtual string get_description() = 0;

    virtual int get_cuteness_rating() = 0;
};

class Puppy : public Cutie {

public:

    Puppy(const string& d, int r);

    string get_description() override;

    int get_cuteness_rating() override;
};

class Kitty : public Cutie {

public:

    Kitty(const string& d, int r);

    string get_description() override;

    int get_cuteness_rating() override;
};

class PygmyMarmoset : public Cutie {

public:

    PygmyMarmoset(const string& d, int r);

    string get_description() override;

    int get_cuteness_rating() override;
};