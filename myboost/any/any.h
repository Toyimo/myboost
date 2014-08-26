#pragma  once
#include "holder.h"

namespace mb{
	class  Any
	{
	public:
		Any() :holder_(nullptr){}

		template<typename ValueType>
		Any(const ValueType& val)
			: holder_(new Holder<ValueType>(val)){

		}

		~Any()
		{
			if (holder_){
				delete holder_;
				holder_ = nullptr;
			}
		}

	private:
		IHolder* holder_;
	};
}