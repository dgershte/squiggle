#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
#endif
#ifndef INCLUDED_away3d_core_sort_RenderableMergeSort
#include <away3d/core/sort/RenderableMergeSort.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
namespace away3d{
namespace core{
namespace sort{

Void RenderableMergeSort_obj::__construct()
{
HX_STACK_PUSH("RenderableMergeSort::new","away3d/core/sort/RenderableMergeSort.hx",18);
{
}
;
	return null();
}

RenderableMergeSort_obj::~RenderableMergeSort_obj() { }

Dynamic RenderableMergeSort_obj::__CreateEmpty() { return  new RenderableMergeSort_obj; }
hx::ObjectPtr< RenderableMergeSort_obj > RenderableMergeSort_obj::__new()
{  hx::ObjectPtr< RenderableMergeSort_obj > result = new RenderableMergeSort_obj();
	result->__construct();
	return result;}

Dynamic RenderableMergeSort_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderableMergeSort_obj > result = new RenderableMergeSort_obj();
	result->__construct();
	return result;}

hx::Object *RenderableMergeSort_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::core::sort::IEntitySorter_obj)) return operator ::away3d::core::sort::IEntitySorter_obj *();
	return super::__ToInterface(inType);
}

::away3d::core::data::RenderableListItem RenderableMergeSort_obj::mergeSortByMaterial( ::away3d::core::data::RenderableListItem head){
	HX_STACK_PUSH("RenderableMergeSort::mergeSortByMaterial","away3d/core/sort/RenderableMergeSort.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(head,"head");
	HX_STACK_LINE(78)
	::away3d::core::data::RenderableListItem headB;		HX_STACK_VAR(headB,"headB");
	HX_STACK_LINE(79)
	::away3d::core::data::RenderableListItem fast;		HX_STACK_VAR(fast,"fast");
	HX_STACK_LINE(80)
	::away3d::core::data::RenderableListItem slow;		HX_STACK_VAR(slow,"slow");
	HX_STACK_LINE(81)
	if (((bool((head == null())) || bool((head->next == null()))))){
		HX_STACK_LINE(81)
		return head;
	}
	HX_STACK_LINE(82)
	slow = head;
	HX_STACK_LINE(83)
	fast = head->next;
	HX_STACK_LINE(84)
	while(((fast != null()))){
		HX_STACK_LINE(85)
		fast = fast->next;
		HX_STACK_LINE(86)
		if (((fast != null()))){
			HX_STACK_LINE(87)
			slow = slow->next;
			HX_STACK_LINE(88)
			fast = fast->next;
		}
	}
	HX_STACK_LINE(92)
	headB = slow->next;
	HX_STACK_LINE(93)
	slow->next = null();
	HX_STACK_LINE(95)
	head = this->mergeSortByMaterial(head);
	HX_STACK_LINE(96)
	headB = this->mergeSortByMaterial(headB);
	HX_STACK_LINE(98)
	::away3d::core::data::RenderableListItem result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(99)
	::away3d::core::data::RenderableListItem curr = null();		HX_STACK_VAR(curr,"curr");
	HX_STACK_LINE(100)
	::away3d::core::data::RenderableListItem l = null();		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(101)
	int cmp;		HX_STACK_VAR(cmp,"cmp");
	HX_STACK_LINE(102)
	if (((head == null()))){
		HX_STACK_LINE(102)
		return headB;
	}
	HX_STACK_LINE(103)
	if (((headB == null()))){
		HX_STACK_LINE(103)
		return head;
	}
	HX_STACK_LINE(104)
	while(((bool((bool((bool((head != null())) && bool((headB != null())))) && bool((head != null())))) && bool((headB != null()))))){
		HX_STACK_LINE(108)
		int aid = head->renderOrderId;		HX_STACK_VAR(aid,"aid");
		HX_STACK_LINE(109)
		int bid = headB->renderOrderId;		HX_STACK_VAR(bid,"bid");
		HX_STACK_LINE(110)
		if (((aid == bid))){
			HX_STACK_LINE(111)
			int ma = head->materialId;		HX_STACK_VAR(ma,"ma");
			HX_STACK_LINE(112)
			int mb = headB->materialId;		HX_STACK_VAR(mb,"mb");
			HX_STACK_LINE(113)
			if (((ma == mb))){
				HX_STACK_LINE(113)
				if (((head->zIndex < headB->zIndex))){
					HX_STACK_LINE(114)
					cmp = (int)1;
				}
				else{
					HX_STACK_LINE(115)
					cmp = (int)-1;
				}
			}
			else{
				HX_STACK_LINE(118)
				if (((ma > mb))){
					HX_STACK_LINE(118)
					cmp = (int)1;
				}
				else{
					HX_STACK_LINE(119)
					cmp = (int)-1;
				}
			}
		}
		else{
			HX_STACK_LINE(122)
			if (((aid > bid))){
				HX_STACK_LINE(122)
				cmp = (int)1;
			}
			else{
				HX_STACK_LINE(123)
				cmp = (int)-1;
			}
		}
		HX_STACK_LINE(124)
		if (((cmp < (int)0))){
			HX_STACK_LINE(125)
			l = head;
			HX_STACK_LINE(126)
			head = head->next;
		}
		else{
			HX_STACK_LINE(130)
			l = headB;
			HX_STACK_LINE(131)
			headB = headB->next;
		}
		HX_STACK_LINE(134)
		if (((result == null()))){
			HX_STACK_LINE(135)
			result = l;
			HX_STACK_LINE(136)
			curr = l;
		}
		else{
			HX_STACK_LINE(140)
			curr->next = l;
			HX_STACK_LINE(141)
			curr = l;
		}
	}
	HX_STACK_LINE(146)
	if (((head != null()))){
		HX_STACK_LINE(146)
		curr->next = head;
	}
	else{
		HX_STACK_LINE(147)
		if (((headB != null()))){
			HX_STACK_LINE(147)
			curr->next = headB;
		}
	}
	HX_STACK_LINE(148)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(RenderableMergeSort_obj,mergeSortByMaterial,return )

::away3d::core::data::RenderableListItem RenderableMergeSort_obj::mergeSortByDepth( ::away3d::core::data::RenderableListItem head){
	HX_STACK_PUSH("RenderableMergeSort::mergeSortByDepth","away3d/core/sort/RenderableMergeSort.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_ARG(head,"head");
	HX_STACK_LINE(31)
	::away3d::core::data::RenderableListItem headB;		HX_STACK_VAR(headB,"headB");
	HX_STACK_LINE(32)
	::away3d::core::data::RenderableListItem fast;		HX_STACK_VAR(fast,"fast");
	HX_STACK_LINE(33)
	::away3d::core::data::RenderableListItem slow;		HX_STACK_VAR(slow,"slow");
	HX_STACK_LINE(34)
	if (((bool((head == null())) || bool((head->next == null()))))){
		HX_STACK_LINE(34)
		return head;
	}
	HX_STACK_LINE(35)
	slow = head;
	HX_STACK_LINE(36)
	fast = head->next;
	HX_STACK_LINE(37)
	while(((fast != null()))){
		HX_STACK_LINE(38)
		fast = fast->next;
		HX_STACK_LINE(39)
		if (((fast != null()))){
			HX_STACK_LINE(40)
			slow = slow->next;
			HX_STACK_LINE(41)
			fast = fast->next;
		}
	}
	HX_STACK_LINE(45)
	headB = slow->next;
	HX_STACK_LINE(46)
	slow->next = null();
	HX_STACK_LINE(48)
	head = this->mergeSortByDepth(head);
	HX_STACK_LINE(49)
	headB = this->mergeSortByDepth(headB);
	HX_STACK_LINE(51)
	::away3d::core::data::RenderableListItem result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(52)
	::away3d::core::data::RenderableListItem curr = null();		HX_STACK_VAR(curr,"curr");
	HX_STACK_LINE(53)
	::away3d::core::data::RenderableListItem l = null();		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(54)
	if (((head == null()))){
		HX_STACK_LINE(54)
		return headB;
	}
	HX_STACK_LINE(55)
	if (((headB == null()))){
		HX_STACK_LINE(55)
		return head;
	}
	HX_STACK_LINE(56)
	while(((bool((head != null())) && bool((headB != null()))))){
		HX_STACK_LINE(57)
		if (((head->zIndex < headB->zIndex))){
			HX_STACK_LINE(58)
			l = head;
			HX_STACK_LINE(59)
			head = head->next;
		}
		else{
			HX_STACK_LINE(63)
			l = headB;
			HX_STACK_LINE(64)
			headB = headB->next;
		}
		HX_STACK_LINE(67)
		if (((result == null()))){
			HX_STACK_LINE(67)
			result = l;
		}
		else{
			HX_STACK_LINE(68)
			curr->next = l;
		}
		HX_STACK_LINE(69)
		curr = l;
	}
	HX_STACK_LINE(72)
	if (((head != null()))){
		HX_STACK_LINE(72)
		curr->next = head;
	}
	else{
		HX_STACK_LINE(73)
		if (((headB != null()))){
			HX_STACK_LINE(73)
			curr->next = headB;
		}
	}
	HX_STACK_LINE(74)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(RenderableMergeSort_obj,mergeSortByDepth,return )

Void RenderableMergeSort_obj::sort( ::away3d::core::traverse::EntityCollector collector){
{
		HX_STACK_PUSH("RenderableMergeSort::sort","away3d/core/sort/RenderableMergeSort.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_ARG(collector,"collector");
		HX_STACK_LINE(26)
		collector->set_opaqueRenderableHead(this->mergeSortByMaterial(collector->get_opaqueRenderableHead()));
		HX_STACK_LINE(27)
		collector->set_blendedRenderableHead(this->mergeSortByDepth(collector->get_blendedRenderableHead()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderableMergeSort_obj,sort,(void))


RenderableMergeSort_obj::RenderableMergeSort_obj()
{
}

void RenderableMergeSort_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderableMergeSort);
	HX_MARK_END_CLASS();
}

void RenderableMergeSort_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic RenderableMergeSort_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mergeSortByDepth") ) { return mergeSortByDepth_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeSortByMaterial") ) { return mergeSortByMaterial_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderableMergeSort_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderableMergeSort_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mergeSortByMaterial"),
	HX_CSTRING("mergeSortByDepth"),
	HX_CSTRING("sort"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderableMergeSort_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderableMergeSort_obj::__mClass,"__mClass");
};

Class RenderableMergeSort_obj::__mClass;

void RenderableMergeSort_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.sort.RenderableMergeSort"), hx::TCanCast< RenderableMergeSort_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RenderableMergeSort_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace sort
