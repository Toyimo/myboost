#pragma  once
#include "../constant.h"

namespace mb{

	mb_interface IHolder{
		virtual ~IHolder(){}

		virtual const std::type_info& type() const = 0;

		virtual IHolder* clone() const = 0;
	};

	template<typename ValueType>
	class Holder : public IHolder{
	public:
		Holder(const ValueType& val) : value_(val){

		}

		virtual const std::type_info& type() const {
			return typeid(ValueType);
		}

		virtual IHolder* clone() const {
			return new Holder(value_);
		}

	public:
		ValueType value_;
	};

	
}