////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <NsCore/Boxing.h>


namespace Noesis
{

////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
TypeEnumImpl<T>::TypeEnumImpl(const TypeInfo& typeInfo): TypeEnum(typeInfo)
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
Ptr<BoxedValue> TypeEnumImpl<T>::GetValueObject(NsSymbol id) const
{
    return Boxing::Box<T>(static_cast<T>(GetValue(id)));
}

}
