#include <Operation.hpp>
#include <vector>
class Translation : public UnOp{
private:
    Vector offset;
public:
    Translation(Node son, Vector offset):offset(offset), UnOp(TRANS, son){}
};