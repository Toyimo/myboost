#pragma  once
#include "../constant.h"

namespace mb{

	mb_interface IHolder{
	virtual ~IHolder(){}
	};

	template<typename ValueType>
	class Holder : public IHolder{
	public:
		Holder(const ValueType& val) : value_(val){

		}

	private:
		ValueType value_;
	};
}