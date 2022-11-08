#include <NOp.hpp>

class Union : public NOp{
public:
    Union():NOp{UNION}{}
    Union(std::vector<Node*> sons):NOp{UNION, sons}{}
    bool addSon(Node* son);
    int getWeight();
    double Value(const Vector& candidate) const;
    Box autoBox() const;
};