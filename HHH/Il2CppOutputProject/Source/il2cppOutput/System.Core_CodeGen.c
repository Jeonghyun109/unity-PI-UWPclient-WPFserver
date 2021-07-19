#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000029 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002B System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002D System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000031 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000032 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000033 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004B System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004E System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000050 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000054 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000056 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005C TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005E System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000060 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000061 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000063 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000065 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006E TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000074 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000075 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000078 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000081 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000087 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000088 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000089 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000008A System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x0000008B System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000008C System.Void System.Linq.Set`1::Resize()
// 0x0000008D System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000008E System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000008F System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000090 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000092 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000093 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000094 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000095 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000096 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000097 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000098 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000099 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009A System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009B System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000009C System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000009D System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000009E System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000009F System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A0 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A1 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000A2 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000A3 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000A4 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000AA System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000AC System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000AD System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000AE System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000AF System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B0 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B1 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000B4 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000BB System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000BC System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000C0 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000C1 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[194] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[194] = 
{
	7356,
	7356,
	7606,
	7606,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7251,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[65] = 
{
	{ 0x02000004, { 99, 4 } },
	{ 0x02000005, { 103, 9 } },
	{ 0x02000006, { 114, 7 } },
	{ 0x02000007, { 123, 10 } },
	{ 0x02000008, { 135, 11 } },
	{ 0x02000009, { 149, 9 } },
	{ 0x0200000A, { 161, 12 } },
	{ 0x0200000B, { 176, 1 } },
	{ 0x0200000C, { 177, 2 } },
	{ 0x0200000D, { 179, 12 } },
	{ 0x0200000E, { 191, 8 } },
	{ 0x0200000F, { 199, 11 } },
	{ 0x02000010, { 210, 12 } },
	{ 0x02000011, { 222, 12 } },
	{ 0x02000012, { 234, 2 } },
	{ 0x02000014, { 236, 8 } },
	{ 0x02000016, { 244, 3 } },
	{ 0x02000017, { 249, 5 } },
	{ 0x02000018, { 254, 7 } },
	{ 0x02000019, { 261, 3 } },
	{ 0x0200001A, { 264, 7 } },
	{ 0x0200001B, { 271, 4 } },
	{ 0x0200001C, { 275, 23 } },
	{ 0x0200001E, { 298, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 4 } },
	{ 0x06000019, { 59, 4 } },
	{ 0x0600001A, { 63, 3 } },
	{ 0x0600001B, { 66, 4 } },
	{ 0x0600001C, { 70, 3 } },
	{ 0x0600001D, { 73, 3 } },
	{ 0x0600001E, { 76, 1 } },
	{ 0x0600001F, { 77, 1 } },
	{ 0x06000020, { 78, 3 } },
	{ 0x06000021, { 81, 3 } },
	{ 0x06000022, { 84, 2 } },
	{ 0x06000023, { 86, 3 } },
	{ 0x06000024, { 89, 2 } },
	{ 0x06000025, { 91, 5 } },
	{ 0x06000026, { 96, 3 } },
	{ 0x06000037, { 112, 2 } },
	{ 0x0600003C, { 121, 2 } },
	{ 0x06000041, { 133, 2 } },
	{ 0x06000047, { 146, 3 } },
	{ 0x0600004C, { 158, 3 } },
	{ 0x06000051, { 173, 3 } },
	{ 0x06000091, { 247, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[300] = 
{
	{ (Il2CppRGCTXDataType)2, 7085 },
	{ (Il2CppRGCTXDataType)3, 26834 },
	{ (Il2CppRGCTXDataType)2, 11384 },
	{ (Il2CppRGCTXDataType)2, 10519 },
	{ (Il2CppRGCTXDataType)3, 46894 },
	{ (Il2CppRGCTXDataType)2, 7803 },
	{ (Il2CppRGCTXDataType)2, 10553 },
	{ (Il2CppRGCTXDataType)3, 46959 },
	{ (Il2CppRGCTXDataType)2, 10531 },
	{ (Il2CppRGCTXDataType)3, 46910 },
	{ (Il2CppRGCTXDataType)2, 7086 },
	{ (Il2CppRGCTXDataType)3, 26835 },
	{ (Il2CppRGCTXDataType)2, 11417 },
	{ (Il2CppRGCTXDataType)2, 10565 },
	{ (Il2CppRGCTXDataType)3, 46975 },
	{ (Il2CppRGCTXDataType)2, 7830 },
	{ (Il2CppRGCTXDataType)2, 10603 },
	{ (Il2CppRGCTXDataType)3, 47155 },
	{ (Il2CppRGCTXDataType)2, 10584 },
	{ (Il2CppRGCTXDataType)3, 47057 },
	{ (Il2CppRGCTXDataType)2, 1299 },
	{ (Il2CppRGCTXDataType)3, 199 },
	{ (Il2CppRGCTXDataType)3, 200 },
	{ (Il2CppRGCTXDataType)2, 4106 },
	{ (Il2CppRGCTXDataType)3, 16821 },
	{ (Il2CppRGCTXDataType)2, 1300 },
	{ (Il2CppRGCTXDataType)3, 217 },
	{ (Il2CppRGCTXDataType)3, 218 },
	{ (Il2CppRGCTXDataType)2, 4123 },
	{ (Il2CppRGCTXDataType)3, 16830 },
	{ (Il2CppRGCTXDataType)3, 52603 },
	{ (Il2CppRGCTXDataType)2, 1338 },
	{ (Il2CppRGCTXDataType)3, 382 },
	{ (Il2CppRGCTXDataType)3, 52609 },
	{ (Il2CppRGCTXDataType)2, 1346 },
	{ (Il2CppRGCTXDataType)3, 418 },
	{ (Il2CppRGCTXDataType)2, 8583 },
	{ (Il2CppRGCTXDataType)3, 37061 },
	{ (Il2CppRGCTXDataType)2, 8584 },
	{ (Il2CppRGCTXDataType)3, 37062 },
	{ (Il2CppRGCTXDataType)3, 22063 },
	{ (Il2CppRGCTXDataType)3, 52535 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)3, 262 },
	{ (Il2CppRGCTXDataType)3, 52648 },
	{ (Il2CppRGCTXDataType)2, 1349 },
	{ (Il2CppRGCTXDataType)3, 441 },
	{ (Il2CppRGCTXDataType)3, 52556 },
	{ (Il2CppRGCTXDataType)2, 1330 },
	{ (Il2CppRGCTXDataType)3, 354 },
	{ (Il2CppRGCTXDataType)2, 1683 },
	{ (Il2CppRGCTXDataType)3, 3045 },
	{ (Il2CppRGCTXDataType)3, 3046 },
	{ (Il2CppRGCTXDataType)2, 7804 },
	{ (Il2CppRGCTXDataType)3, 28992 },
	{ (Il2CppRGCTXDataType)2, 6192 },
	{ (Il2CppRGCTXDataType)2, 4417 },
	{ (Il2CppRGCTXDataType)2, 4670 },
	{ (Il2CppRGCTXDataType)2, 4991 },
	{ (Il2CppRGCTXDataType)2, 6193 },
	{ (Il2CppRGCTXDataType)2, 4418 },
	{ (Il2CppRGCTXDataType)2, 4671 },
	{ (Il2CppRGCTXDataType)2, 4992 },
	{ (Il2CppRGCTXDataType)2, 4672 },
	{ (Il2CppRGCTXDataType)2, 4993 },
	{ (Il2CppRGCTXDataType)3, 16823 },
	{ (Il2CppRGCTXDataType)2, 6194 },
	{ (Il2CppRGCTXDataType)2, 4419 },
	{ (Il2CppRGCTXDataType)2, 4673 },
	{ (Il2CppRGCTXDataType)2, 4994 },
	{ (Il2CppRGCTXDataType)2, 4674 },
	{ (Il2CppRGCTXDataType)2, 4995 },
	{ (Il2CppRGCTXDataType)3, 16824 },
	{ (Il2CppRGCTXDataType)2, 6191 },
	{ (Il2CppRGCTXDataType)2, 4669 },
	{ (Il2CppRGCTXDataType)2, 4990 },
	{ (Il2CppRGCTXDataType)2, 2853 },
	{ (Il2CppRGCTXDataType)2, 4652 },
	{ (Il2CppRGCTXDataType)2, 4653 },
	{ (Il2CppRGCTXDataType)2, 4987 },
	{ (Il2CppRGCTXDataType)3, 16820 },
	{ (Il2CppRGCTXDataType)2, 4651 },
	{ (Il2CppRGCTXDataType)2, 4986 },
	{ (Il2CppRGCTXDataType)3, 16819 },
	{ (Il2CppRGCTXDataType)2, 4416 },
	{ (Il2CppRGCTXDataType)2, 4667 },
	{ (Il2CppRGCTXDataType)2, 4668 },
	{ (Il2CppRGCTXDataType)2, 4989 },
	{ (Il2CppRGCTXDataType)3, 16822 },
	{ (Il2CppRGCTXDataType)2, 4415 },
	{ (Il2CppRGCTXDataType)3, 52507 },
	{ (Il2CppRGCTXDataType)3, 15409 },
	{ (Il2CppRGCTXDataType)2, 3878 },
	{ (Il2CppRGCTXDataType)2, 4655 },
	{ (Il2CppRGCTXDataType)2, 4988 },
	{ (Il2CppRGCTXDataType)2, 5233 },
	{ (Il2CppRGCTXDataType)2, 4700 },
	{ (Il2CppRGCTXDataType)2, 5001 },
	{ (Il2CppRGCTXDataType)3, 17088 },
	{ (Il2CppRGCTXDataType)3, 26836 },
	{ (Il2CppRGCTXDataType)3, 26838 },
	{ (Il2CppRGCTXDataType)2, 939 },
	{ (Il2CppRGCTXDataType)3, 26837 },
	{ (Il2CppRGCTXDataType)3, 26846 },
	{ (Il2CppRGCTXDataType)2, 7089 },
	{ (Il2CppRGCTXDataType)2, 10532 },
	{ (Il2CppRGCTXDataType)3, 46911 },
	{ (Il2CppRGCTXDataType)3, 26847 },
	{ (Il2CppRGCTXDataType)2, 4763 },
	{ (Il2CppRGCTXDataType)2, 5049 },
	{ (Il2CppRGCTXDataType)3, 16838 },
	{ (Il2CppRGCTXDataType)3, 52468 },
	{ (Il2CppRGCTXDataType)2, 10585 },
	{ (Il2CppRGCTXDataType)3, 47058 },
	{ (Il2CppRGCTXDataType)3, 26839 },
	{ (Il2CppRGCTXDataType)2, 7088 },
	{ (Il2CppRGCTXDataType)2, 10520 },
	{ (Il2CppRGCTXDataType)3, 46895 },
	{ (Il2CppRGCTXDataType)3, 16837 },
	{ (Il2CppRGCTXDataType)3, 26840 },
	{ (Il2CppRGCTXDataType)3, 52467 },
	{ (Il2CppRGCTXDataType)2, 10566 },
	{ (Il2CppRGCTXDataType)3, 46976 },
	{ (Il2CppRGCTXDataType)3, 26853 },
	{ (Il2CppRGCTXDataType)2, 7090 },
	{ (Il2CppRGCTXDataType)2, 10554 },
	{ (Il2CppRGCTXDataType)3, 46960 },
	{ (Il2CppRGCTXDataType)3, 29061 },
	{ (Il2CppRGCTXDataType)3, 13254 },
	{ (Il2CppRGCTXDataType)3, 16839 },
	{ (Il2CppRGCTXDataType)3, 13253 },
	{ (Il2CppRGCTXDataType)3, 26854 },
	{ (Il2CppRGCTXDataType)3, 52469 },
	{ (Il2CppRGCTXDataType)2, 10604 },
	{ (Il2CppRGCTXDataType)3, 47156 },
	{ (Il2CppRGCTXDataType)3, 26867 },
	{ (Il2CppRGCTXDataType)2, 7092 },
	{ (Il2CppRGCTXDataType)2, 10587 },
	{ (Il2CppRGCTXDataType)3, 47060 },
	{ (Il2CppRGCTXDataType)3, 26868 },
	{ (Il2CppRGCTXDataType)2, 4766 },
	{ (Il2CppRGCTXDataType)2, 5052 },
	{ (Il2CppRGCTXDataType)3, 16843 },
	{ (Il2CppRGCTXDataType)3, 16842 },
	{ (Il2CppRGCTXDataType)2, 10534 },
	{ (Il2CppRGCTXDataType)3, 46913 },
	{ (Il2CppRGCTXDataType)3, 52479 },
	{ (Il2CppRGCTXDataType)2, 10586 },
	{ (Il2CppRGCTXDataType)3, 47059 },
	{ (Il2CppRGCTXDataType)3, 26860 },
	{ (Il2CppRGCTXDataType)2, 7091 },
	{ (Il2CppRGCTXDataType)2, 10568 },
	{ (Il2CppRGCTXDataType)3, 46978 },
	{ (Il2CppRGCTXDataType)3, 16841 },
	{ (Il2CppRGCTXDataType)3, 16840 },
	{ (Il2CppRGCTXDataType)3, 26861 },
	{ (Il2CppRGCTXDataType)2, 10533 },
	{ (Il2CppRGCTXDataType)3, 46912 },
	{ (Il2CppRGCTXDataType)3, 52478 },
	{ (Il2CppRGCTXDataType)2, 10567 },
	{ (Il2CppRGCTXDataType)3, 46977 },
	{ (Il2CppRGCTXDataType)3, 26874 },
	{ (Il2CppRGCTXDataType)2, 7093 },
	{ (Il2CppRGCTXDataType)2, 10606 },
	{ (Il2CppRGCTXDataType)3, 47158 },
	{ (Il2CppRGCTXDataType)3, 29062 },
	{ (Il2CppRGCTXDataType)3, 13256 },
	{ (Il2CppRGCTXDataType)3, 16845 },
	{ (Il2CppRGCTXDataType)3, 16844 },
	{ (Il2CppRGCTXDataType)3, 13255 },
	{ (Il2CppRGCTXDataType)3, 26875 },
	{ (Il2CppRGCTXDataType)2, 10535 },
	{ (Il2CppRGCTXDataType)3, 46914 },
	{ (Il2CppRGCTXDataType)3, 52480 },
	{ (Il2CppRGCTXDataType)2, 10605 },
	{ (Il2CppRGCTXDataType)3, 47157 },
	{ (Il2CppRGCTXDataType)3, 16834 },
	{ (Il2CppRGCTXDataType)3, 16835 },
	{ (Il2CppRGCTXDataType)3, 16846 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)2, 4752 },
	{ (Il2CppRGCTXDataType)2, 5041 },
	{ (Il2CppRGCTXDataType)3, 16836 },
	{ (Il2CppRGCTXDataType)2, 4789 },
	{ (Il2CppRGCTXDataType)2, 5082 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)2, 1339 },
	{ (Il2CppRGCTXDataType)3, 383 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)3, 420 },
	{ (Il2CppRGCTXDataType)2, 4755 },
	{ (Il2CppRGCTXDataType)2, 5043 },
	{ (Il2CppRGCTXDataType)3, 422 },
	{ (Il2CppRGCTXDataType)2, 935 },
	{ (Il2CppRGCTXDataType)2, 1347 },
	{ (Il2CppRGCTXDataType)3, 419 },
	{ (Il2CppRGCTXDataType)3, 421 },
	{ (Il2CppRGCTXDataType)3, 264 },
	{ (Il2CppRGCTXDataType)2, 9751 },
	{ (Il2CppRGCTXDataType)3, 42919 },
	{ (Il2CppRGCTXDataType)2, 4746 },
	{ (Il2CppRGCTXDataType)2, 5037 },
	{ (Il2CppRGCTXDataType)3, 42920 },
	{ (Il2CppRGCTXDataType)3, 266 },
	{ (Il2CppRGCTXDataType)2, 930 },
	{ (Il2CppRGCTXDataType)2, 1304 },
	{ (Il2CppRGCTXDataType)3, 263 },
	{ (Il2CppRGCTXDataType)3, 265 },
	{ (Il2CppRGCTXDataType)3, 443 },
	{ (Il2CppRGCTXDataType)3, 444 },
	{ (Il2CppRGCTXDataType)2, 9755 },
	{ (Il2CppRGCTXDataType)3, 42924 },
	{ (Il2CppRGCTXDataType)2, 4758 },
	{ (Il2CppRGCTXDataType)2, 5045 },
	{ (Il2CppRGCTXDataType)3, 42925 },
	{ (Il2CppRGCTXDataType)3, 446 },
	{ (Il2CppRGCTXDataType)2, 937 },
	{ (Il2CppRGCTXDataType)2, 1350 },
	{ (Il2CppRGCTXDataType)3, 442 },
	{ (Il2CppRGCTXDataType)3, 445 },
	{ (Il2CppRGCTXDataType)3, 356 },
	{ (Il2CppRGCTXDataType)2, 9753 },
	{ (Il2CppRGCTXDataType)3, 42921 },
	{ (Il2CppRGCTXDataType)2, 4749 },
	{ (Il2CppRGCTXDataType)2, 5039 },
	{ (Il2CppRGCTXDataType)3, 42922 },
	{ (Il2CppRGCTXDataType)3, 42923 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)2, 932 },
	{ (Il2CppRGCTXDataType)2, 1331 },
	{ (Il2CppRGCTXDataType)3, 355 },
	{ (Il2CppRGCTXDataType)3, 357 },
	{ (Il2CppRGCTXDataType)2, 11436 },
	{ (Il2CppRGCTXDataType)2, 2854 },
	{ (Il2CppRGCTXDataType)3, 15449 },
	{ (Il2CppRGCTXDataType)2, 3894 },
	{ (Il2CppRGCTXDataType)2, 11905 },
	{ (Il2CppRGCTXDataType)3, 42916 },
	{ (Il2CppRGCTXDataType)3, 42917 },
	{ (Il2CppRGCTXDataType)2, 5250 },
	{ (Il2CppRGCTXDataType)3, 42918 },
	{ (Il2CppRGCTXDataType)2, 832 },
	{ (Il2CppRGCTXDataType)2, 1306 },
	{ (Il2CppRGCTXDataType)3, 276 },
	{ (Il2CppRGCTXDataType)3, 37036 },
	{ (Il2CppRGCTXDataType)2, 8585 },
	{ (Il2CppRGCTXDataType)3, 37063 },
	{ (Il2CppRGCTXDataType)2, 1684 },
	{ (Il2CppRGCTXDataType)3, 3047 },
	{ (Il2CppRGCTXDataType)3, 37042 },
	{ (Il2CppRGCTXDataType)3, 13196 },
	{ (Il2CppRGCTXDataType)2, 977 },
	{ (Il2CppRGCTXDataType)3, 37037 },
	{ (Il2CppRGCTXDataType)2, 8580 },
	{ (Il2CppRGCTXDataType)3, 3480 },
	{ (Il2CppRGCTXDataType)2, 1707 },
	{ (Il2CppRGCTXDataType)2, 3044 },
	{ (Il2CppRGCTXDataType)3, 13214 },
	{ (Il2CppRGCTXDataType)3, 37038 },
	{ (Il2CppRGCTXDataType)3, 13191 },
	{ (Il2CppRGCTXDataType)3, 13192 },
	{ (Il2CppRGCTXDataType)3, 13190 },
	{ (Il2CppRGCTXDataType)3, 13193 },
	{ (Il2CppRGCTXDataType)2, 3040 },
	{ (Il2CppRGCTXDataType)2, 11497 },
	{ (Il2CppRGCTXDataType)3, 16832 },
	{ (Il2CppRGCTXDataType)3, 13195 },
	{ (Il2CppRGCTXDataType)2, 4582 },
	{ (Il2CppRGCTXDataType)3, 13194 },
	{ (Il2CppRGCTXDataType)2, 4424 },
	{ (Il2CppRGCTXDataType)2, 11426 },
	{ (Il2CppRGCTXDataType)2, 4703 },
	{ (Il2CppRGCTXDataType)2, 5003 },
	{ (Il2CppRGCTXDataType)3, 15428 },
	{ (Il2CppRGCTXDataType)2, 3887 },
	{ (Il2CppRGCTXDataType)3, 17802 },
	{ (Il2CppRGCTXDataType)3, 17803 },
	{ (Il2CppRGCTXDataType)3, 17808 },
	{ (Il2CppRGCTXDataType)2, 5244 },
	{ (Il2CppRGCTXDataType)3, 17805 },
	{ (Il2CppRGCTXDataType)3, 53700 },
	{ (Il2CppRGCTXDataType)2, 3048 },
	{ (Il2CppRGCTXDataType)3, 13244 },
	{ (Il2CppRGCTXDataType)1, 4573 },
	{ (Il2CppRGCTXDataType)2, 11442 },
	{ (Il2CppRGCTXDataType)3, 17804 },
	{ (Il2CppRGCTXDataType)1, 11442 },
	{ (Il2CppRGCTXDataType)1, 5244 },
	{ (Il2CppRGCTXDataType)2, 11903 },
	{ (Il2CppRGCTXDataType)2, 11442 },
	{ (Il2CppRGCTXDataType)2, 4709 },
	{ (Il2CppRGCTXDataType)2, 5007 },
	{ (Il2CppRGCTXDataType)3, 17809 },
	{ (Il2CppRGCTXDataType)3, 17807 },
	{ (Il2CppRGCTXDataType)3, 17806 },
	{ (Il2CppRGCTXDataType)2, 706 },
	{ (Il2CppRGCTXDataType)3, 13257 },
	{ (Il2CppRGCTXDataType)2, 949 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	194,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	65,
	s_rgctxIndices,
	300,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
