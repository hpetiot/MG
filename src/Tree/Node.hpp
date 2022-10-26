#pragma once

#include <implicits.h>


class Node : public AnalyticsScallareField {
private:
    bool isBinary;
	std::array<ASF, 2> subtree;
    std::array<int, 2> weights;
	AnalyticsScallareField Operation;
public:
	void addLeft(AnalyticScallarField left);
	void addRight(AnalyticScallarField right);
	int weight();
    OpeType binOperationType();
	bool isBinary();
	double Value(Vector candidate);
	Vector Gradient(Vector point);
	Box autoBox();
}