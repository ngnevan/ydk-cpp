
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttributes()
{

    yang_name = "auto-backup-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::~AutoBackupAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::has_data() const
{
    for (std::size_t index=0; index<auto_backup_attribute.size(); index++)
    {
        if(auto_backup_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::has_operation() const
{
    for (std::size_t index=0; index<auto_backup_attribute.size(); index++)
    {
        if(auto_backup_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-backup-attribute")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute>();
        c->parent = this;
        auto_backup_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : auto_backup_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-backup-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"},
    record_route{YType::empty, "record-route"}
    	,
    signalled_name(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName>())
	,auto_backup_logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging>())
	,priority(nullptr) // presence node
	,affinity_mask(nullptr) // presence node
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection>())
	,policy_classes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes>())
{
    signalled_name->parent = this;
    auto_backup_logging->parent = this;
    path_selection->parent = this;
    policy_classes->parent = this;
    new_style_affinity_affinity_types->parent = this;

    yang_name = "auto-backup-attribute"; yang_parent_name = "auto-backup-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::~AutoBackupAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| record_route.is_set
	|| (signalled_name !=  nullptr && signalled_name->has_data())
	|| (auto_backup_logging !=  nullptr && auto_backup_logging->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (signalled_name !=  nullptr && signalled_name->has_operation())
	|| (auto_backup_logging !=  nullptr && auto_backup_logging->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/auto-backup-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "auto-backup-logging")
    {
        if(auto_backup_logging == nullptr)
        {
            auto_backup_logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging>();
        }
        return auto_backup_logging;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(signalled_name != nullptr)
    {
        children["signalled-name"] = signalled_name;
    }

    if(auto_backup_logging != nullptr)
    {
        children["auto-backup-logging"] = auto_backup_logging;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(policy_classes != nullptr)
    {
        children["policy-classes"] = policy_classes;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "auto-backup-logging" || name == "priority" || name == "affinity-mask" || name == "path-selection" || name == "policy-classes" || name == "new-style-affinity-affinity-types" || name == "attribute-set-name" || name == "enable" || name == "record-route")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    mp_address{YType::boolean, "mp-address"}
{

    yang_name = "signalled-name"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::~SignalledName()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::has_data() const
{
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| mp_address.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(mp_address.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (mp_address.is_set || is_set(mp_address.yfilter)) leaf_name_data.push_back(mp_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp-address")
    {
        mp_address = value;
        mp_address.value_namespace = name_space;
        mp_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "mp-address")
    {
        mp_address.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "mp-address")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::AutoBackupLogging()
    :
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    state_message{YType::empty, "state-message"},
    reoptimized_message{YType::empty, "reoptimized-message"}
{

    yang_name = "auto-backup-logging"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::~AutoBackupLogging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::has_data() const
{
    return bandwidth_change_message.is_set
	|| reoptimize_attempts_message.is_set
	|| state_message.is_set
	|| reoptimized_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-change-message" || name == "reoptimize-attempts-message" || name == "state-message" || name == "reoptimized-message")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::has_data() const
{
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{

    yang_name = "policy-classes"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::~PolicyClasses()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_class.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "auto-backup-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttributes()
{

    yang_name = "otn-pp-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::~OtnPpAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::has_data() const
{
    for (std::size_t index=0; index<otn_pp_attribute.size(); index++)
    {
        if(otn_pp_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::has_operation() const
{
    for (std::size_t index=0; index<otn_pp_attribute.size(); index++)
    {
        if(otn_pp_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-pp-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn-pp-attribute")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute>();
        c->parent = this;
        otn_pp_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otn_pp_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-pp-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::OtnPpAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    aps_protection_mode{YType::enumeration, "aps-protection-mode"},
    aps_restoration_style{YType::enumeration, "aps-restoration-style"},
    aps_protection_type{YType::enumeration, "aps-protection-type"},
    enable{YType::empty, "enable"}
    	,
    revert_schedule_names(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames>())
	,sub_network_connection_mode(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode>())
	,timers(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection>())
{
    revert_schedule_names->parent = this;
    sub_network_connection_mode->parent = this;
    timers->parent = this;
    path_selection->parent = this;

    yang_name = "otn-pp-attribute"; yang_parent_name = "otn-pp-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::~OtnPpAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| aps_protection_mode.is_set
	|| aps_restoration_style.is_set
	|| aps_protection_type.is_set
	|| enable.is_set
	|| (revert_schedule_names !=  nullptr && revert_schedule_names->has_data())
	|| (sub_network_connection_mode !=  nullptr && sub_network_connection_mode->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(aps_protection_mode.yfilter)
	|| ydk::is_set(aps_restoration_style.yfilter)
	|| ydk::is_set(aps_protection_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (revert_schedule_names !=  nullptr && revert_schedule_names->has_operation())
	|| (sub_network_connection_mode !=  nullptr && sub_network_connection_mode->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/otn-pp-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-pp-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (aps_protection_mode.is_set || is_set(aps_protection_mode.yfilter)) leaf_name_data.push_back(aps_protection_mode.get_name_leafdata());
    if (aps_restoration_style.is_set || is_set(aps_restoration_style.yfilter)) leaf_name_data.push_back(aps_restoration_style.get_name_leafdata());
    if (aps_protection_type.is_set || is_set(aps_protection_type.yfilter)) leaf_name_data.push_back(aps_protection_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule-names")
    {
        if(revert_schedule_names == nullptr)
        {
            revert_schedule_names = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames>();
        }
        return revert_schedule_names;
    }

    if(child_yang_name == "sub-network-connection-mode")
    {
        if(sub_network_connection_mode == nullptr)
        {
            sub_network_connection_mode = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode>();
        }
        return sub_network_connection_mode;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection>();
        }
        return path_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(revert_schedule_names != nullptr)
    {
        children["revert-schedule-names"] = revert_schedule_names;
    }

    if(sub_network_connection_mode != nullptr)
    {
        children["sub-network-connection-mode"] = sub_network_connection_mode;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-protection-mode")
    {
        aps_protection_mode = value;
        aps_protection_mode.value_namespace = name_space;
        aps_protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-restoration-style")
    {
        aps_restoration_style = value;
        aps_restoration_style.value_namespace = name_space;
        aps_restoration_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-protection-type")
    {
        aps_protection_type = value;
        aps_protection_type.value_namespace = name_space;
        aps_protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "aps-protection-mode")
    {
        aps_protection_mode.yfilter = yfilter;
    }
    if(value_path == "aps-restoration-style")
    {
        aps_restoration_style.yfilter = yfilter;
    }
    if(value_path == "aps-protection-type")
    {
        aps_protection_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule-names" || name == "sub-network-connection-mode" || name == "timers" || name == "path-selection" || name == "attribute-set-name" || name == "aps-protection-mode" || name == "aps-restoration-style" || name == "aps-protection-type" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleNames()
{

    yang_name = "revert-schedule-names"; yang_parent_name = "otn-pp-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::~RevertScheduleNames()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::has_data() const
{
    for (std::size_t index=0; index<revert_schedule_name.size(); index++)
    {
        if(revert_schedule_name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::has_operation() const
{
    for (std::size_t index=0; index<revert_schedule_name.size(); index++)
    {
        if(revert_schedule_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule-name")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName>();
        c->parent = this;
        revert_schedule_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : revert_schedule_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule-name")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::RevertScheduleName()
    :
    schedule_name{YType::str, "schedule-name"},
    revert_schedule_max_tries{YType::uint32, "revert-schedule-max-tries"},
    sch_name_enable{YType::empty, "sch-name-enable"},
    revert_schedule_frequency{YType::uint32, "revert-schedule-frequency"}
    	,
    schedule_duration(nullptr) // presence node
	,schedule_date(nullptr) // presence node
{

    yang_name = "revert-schedule-name"; yang_parent_name = "revert-schedule-names"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::~RevertScheduleName()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::has_data() const
{
    return schedule_name.is_set
	|| revert_schedule_max_tries.is_set
	|| sch_name_enable.is_set
	|| revert_schedule_frequency.is_set
	|| (schedule_duration !=  nullptr && schedule_duration->has_data())
	|| (schedule_date !=  nullptr && schedule_date->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedule_name.yfilter)
	|| ydk::is_set(revert_schedule_max_tries.yfilter)
	|| ydk::is_set(sch_name_enable.yfilter)
	|| ydk::is_set(revert_schedule_frequency.yfilter)
	|| (schedule_duration !=  nullptr && schedule_duration->has_operation())
	|| (schedule_date !=  nullptr && schedule_date->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule-name" <<"[schedule-name='" <<schedule_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_name.is_set || is_set(schedule_name.yfilter)) leaf_name_data.push_back(schedule_name.get_name_leafdata());
    if (revert_schedule_max_tries.is_set || is_set(revert_schedule_max_tries.yfilter)) leaf_name_data.push_back(revert_schedule_max_tries.get_name_leafdata());
    if (sch_name_enable.is_set || is_set(sch_name_enable.yfilter)) leaf_name_data.push_back(sch_name_enable.get_name_leafdata());
    if (revert_schedule_frequency.is_set || is_set(revert_schedule_frequency.yfilter)) leaf_name_data.push_back(revert_schedule_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule-duration")
    {
        if(schedule_duration == nullptr)
        {
            schedule_duration = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration>();
        }
        return schedule_duration;
    }

    if(child_yang_name == "schedule-date")
    {
        if(schedule_date == nullptr)
        {
            schedule_date = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate>();
        }
        return schedule_date;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(schedule_duration != nullptr)
    {
        children["schedule-duration"] = schedule_duration;
    }

    if(schedule_date != nullptr)
    {
        children["schedule-date"] = schedule_date;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedule-name")
    {
        schedule_name = value;
        schedule_name.value_namespace = name_space;
        schedule_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-schedule-max-tries")
    {
        revert_schedule_max_tries = value;
        revert_schedule_max_tries.value_namespace = name_space;
        revert_schedule_max_tries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sch-name-enable")
    {
        sch_name_enable = value;
        sch_name_enable.value_namespace = name_space;
        sch_name_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-schedule-frequency")
    {
        revert_schedule_frequency = value;
        revert_schedule_frequency.value_namespace = name_space;
        revert_schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedule-name")
    {
        schedule_name.yfilter = yfilter;
    }
    if(value_path == "revert-schedule-max-tries")
    {
        revert_schedule_max_tries.yfilter = yfilter;
    }
    if(value_path == "sch-name-enable")
    {
        sch_name_enable.yfilter = yfilter;
    }
    if(value_path == "revert-schedule-frequency")
    {
        revert_schedule_frequency.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-duration" || name == "schedule-date" || name == "schedule-name" || name == "revert-schedule-max-tries" || name == "sch-name-enable" || name == "revert-schedule-frequency")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::ScheduleDuration()
    :
    hour{YType::uint32, "hour"},
    minutes{YType::uint32, "minutes"}
{

    yang_name = "schedule-duration"; yang_parent_name = "revert-schedule-name"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::~ScheduleDuration()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::has_data() const
{
    return hour.is_set
	|| minutes.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour" || name == "minutes")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::ScheduleDate()
    :
    hour{YType::uint32, "hour"},
    minutes{YType::uint32, "minutes"},
    month{YType::uint32, "month"},
    day{YType::uint32, "day"},
    year{YType::uint32, "year"}
{

    yang_name = "schedule-date"; yang_parent_name = "revert-schedule-name"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::~ScheduleDate()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::has_data() const
{
    return hour.is_set
	|| minutes.is_set
	|| month.is_set
	|| day.is_set
	|| year.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-date";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour" || name == "minutes" || name == "month" || name == "day" || name == "year")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::SubNetworkConnectionMode()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    connection_monitoring_mode{YType::uint32, "connection-monitoring-mode"}
{

    yang_name = "sub-network-connection-mode"; yang_parent_name = "otn-pp-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::~SubNetworkConnectionMode()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::has_data() const
{
    return connection_mode.is_set
	|| connection_monitoring_mode.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_mode.yfilter)
	|| ydk::is_set(connection_monitoring_mode.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-network-connection-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.yfilter)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (connection_monitoring_mode.is_set || is_set(connection_monitoring_mode.yfilter)) leaf_name_data.push_back(connection_monitoring_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
        connection_mode.value_namespace = name_space;
        connection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-monitoring-mode")
    {
        connection_monitoring_mode = value;
        connection_monitoring_mode.value_namespace = name_space;
        connection_monitoring_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-mode")
    {
        connection_mode.yfilter = yfilter;
    }
    if(value_path == "connection-monitoring-mode")
    {
        connection_monitoring_mode.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-mode" || name == "connection-monitoring-mode")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::Timers()
    :
    aps_wait_to_restore{YType::uint32, "aps-wait-to-restore"},
    aps_hold_off{YType::uint32, "aps-hold-off"}
{

    yang_name = "timers"; yang_parent_name = "otn-pp-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::has_data() const
{
    return aps_wait_to_restore.is_set
	|| aps_hold_off.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aps_wait_to_restore.yfilter)
	|| ydk::is_set(aps_hold_off.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aps_wait_to_restore.is_set || is_set(aps_wait_to_restore.yfilter)) leaf_name_data.push_back(aps_wait_to_restore.get_name_leafdata());
    if (aps_hold_off.is_set || is_set(aps_hold_off.yfilter)) leaf_name_data.push_back(aps_hold_off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aps-wait-to-restore")
    {
        aps_wait_to_restore = value;
        aps_wait_to_restore.value_namespace = name_space;
        aps_wait_to_restore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-hold-off")
    {
        aps_hold_off = value;
        aps_hold_off.value_namespace = name_space;
        aps_hold_off.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aps-wait-to-restore")
    {
        aps_wait_to_restore.yfilter = yfilter;
    }
    if(value_path == "aps-hold-off")
    {
        aps_hold_off.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps-wait-to-restore" || name == "aps-hold-off")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "otn-pp-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttributes()
{

    yang_name = "auto-mesh-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::~AutoMeshAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::has_data() const
{
    for (std::size_t index=0; index<auto_mesh_attribute.size(); index++)
    {
        if(auto_mesh_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::has_operation() const
{
    for (std::size_t index=0; index<auto_mesh_attribute.size(); index++)
    {
        if(auto_mesh_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-mesh-attribute")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute>();
        c->parent = this;
        auto_mesh_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : auto_mesh_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    autoroute_announce{YType::empty, "autoroute-announce"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    forward_class{YType::uint32, "forward-class"},
    enable{YType::empty, "enable"},
    record_route{YType::empty, "record-route"},
    collection_only{YType::empty, "collection-only"},
    soft_preemption{YType::empty, "soft-preemption"},
    load_share{YType::uint32, "load-share"}
    	,
    auto_mesh_logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging>())
	,priority(nullptr) // presence node
	,affinity_mask(nullptr) // presence node
	,bandwidth(nullptr) // presence node
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection>())
	,policy_classes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes>())
	,fast_reroute(nullptr) // presence node
{
    auto_mesh_logging->parent = this;
    path_selection->parent = this;
    policy_classes->parent = this;
    new_style_affinity_affinity_types->parent = this;

    yang_name = "auto-mesh-attribute"; yang_parent_name = "auto-mesh-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::~AutoMeshAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| autoroute_announce.is_set
	|| interface_bandwidth.is_set
	|| forward_class.is_set
	|| enable.is_set
	|| record_route.is_set
	|| collection_only.is_set
	|| soft_preemption.is_set
	|| load_share.is_set
	|| (auto_mesh_logging !=  nullptr && auto_mesh_logging->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(autoroute_announce.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(collection_only.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| (auto_mesh_logging !=  nullptr && auto_mesh_logging->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/auto-mesh-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (autoroute_announce.is_set || is_set(autoroute_announce.yfilter)) leaf_name_data.push_back(autoroute_announce.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.yfilter)) leaf_name_data.push_back(collection_only.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-mesh-logging")
    {
        if(auto_mesh_logging == nullptr)
        {
            auto_mesh_logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging>();
        }
        return auto_mesh_logging;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_mesh_logging != nullptr)
    {
        children["auto-mesh-logging"] = auto_mesh_logging;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(policy_classes != nullptr)
    {
        children["policy-classes"] = policy_classes;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoroute-announce")
    {
        autoroute_announce = value;
        autoroute_announce.value_namespace = name_space;
        autoroute_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
        collection_only.value_namespace = name_space;
        collection_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "autoroute-announce")
    {
        autoroute_announce.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "collection-only")
    {
        collection_only.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-logging" || name == "priority" || name == "affinity-mask" || name == "bandwidth" || name == "path-selection" || name == "policy-classes" || name == "new-style-affinity-affinity-types" || name == "fast-reroute" || name == "attribute-set-name" || name == "autoroute-announce" || name == "interface-bandwidth" || name == "forward-class" || name == "enable" || name == "record-route" || name == "collection-only" || name == "soft-preemption" || name == "load-share")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::AutoMeshLogging()
    :
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"}
{

    yang_name = "auto-mesh-logging"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::~AutoMeshLogging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::has_data() const
{
    return bandwidth_change_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| insufficient_bw_message.is_set
	|| reoptimized_message.is_set
	|| pcalc_failure_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-change-message" || name == "reoptimize-attempts-message" || name == "reroute-messsage" || name == "state-message" || name == "insufficient-bw-message" || name == "reoptimized-message" || name == "pcalc-failure-message")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::has_data() const
{
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::Bandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::has_data() const
{
    return dste_type.is_set
	|| class_or_pool_type.is_set
	|| bandwidth.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "class-or-pool-type" || name == "bandwidth")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{

    yang_name = "policy-classes"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::~PolicyClasses()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_class.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "auto-mesh-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttributes()
{

    yang_name = "xro-attributes"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::~XroAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::has_data() const
{
    for (std::size_t index=0; index<xro_attribute.size(); index++)
    {
        if(xro_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::has_operation() const
{
    for (std::size_t index=0; index<xro_attribute.size(); index++)
    {
        if(xro_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-attribute")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute>();
        c->parent = this;
        xro_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : xro_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-attribute")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::XroAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
    	,
    path_diversity(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection>())
{
    path_diversity->parent = this;
    path_selection->parent = this;

    yang_name = "xro-attribute"; yang_parent_name = "xro-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::~XroAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| (path_diversity !=  nullptr && path_diversity->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (path_diversity !=  nullptr && path_diversity->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/xro-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-diversity")
    {
        if(path_diversity == nullptr)
        {
            path_diversity = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity>();
        }
        return path_diversity;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection>();
        }
        return path_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_diversity != nullptr)
    {
        children["path-diversity"] = path_diversity;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-diversity" || name == "path-selection" || name == "attribute-set-name" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::PathDiversity()
    :
    srlgs(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs>())
	,lsp(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp>())
{
    srlgs->parent = this;
    lsp->parent = this;

    yang_name = "path-diversity"; yang_parent_name = "xro-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::~PathDiversity()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::has_data() const
{
    return (srlgs !=  nullptr && srlgs->has_data())
	|| (lsp !=  nullptr && lsp->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::has_operation() const
{
    return is_set(yfilter)
	|| (srlgs !=  nullptr && srlgs->has_operation())
	|| (lsp !=  nullptr && lsp->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-diversity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs>();
        }
        return srlgs;
    }

    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp>();
        }
        return lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srlgs != nullptr)
    {
        children["srlgs"] = srlgs;
    }

    if(lsp != nullptr)
    {
        children["lsp"] = lsp;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlgs" || name == "lsp")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlgs()
{

    yang_name = "srlgs"; yang_parent_name = "path-diversity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::~Srlgs()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::Srlg()
    :
    srlg{YType::uint32, "srlg"},
    conformance{YType::enumeration, "conformance"}
{

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::has_data() const
{
    return srlg.is_set
	|| conformance.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg.yfilter)
	|| ydk::is_set(conformance.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg='" <<srlg <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (conformance.is_set || is_set(conformance.yfilter)) leaf_name_data.push_back(conformance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformance")
    {
        conformance = value;
        conformance.value_namespace = name_space;
        conformance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
    if(value_path == "conformance")
    {
        conformance.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg" || name == "conformance")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Lsp()
    :
    fecs(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs>())
{
    fecs->parent = this;

    yang_name = "lsp"; yang_parent_name = "path-diversity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::~Lsp()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::has_data() const
{
    return (fecs !=  nullptr && fecs->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| (fecs !=  nullptr && fecs->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fecs")
    {
        if(fecs == nullptr)
        {
            fecs = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs>();
        }
        return fecs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fecs != nullptr)
    {
        children["fecs"] = fecs;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecs")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fecs()
{

    yang_name = "fecs"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::~Fecs()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::has_data() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::has_operation() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec>();
        c->parent = this;
        fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::Fec()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    conformance{YType::enumeration, "conformance"}
{

    yang_name = "fec"; yang_parent_name = "fecs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::~Fec()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::has_data() const
{
    return source.is_set
	|| destination.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| conformance.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(conformance.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec" <<"[source='" <<source <<"']" <<"[destination='" <<destination <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (conformance.is_set || is_set(conformance.yfilter)) leaf_name_data.push_back(conformance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformance")
    {
        conformance = value;
        conformance.value_namespace = name_space;
        conformance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "conformance")
    {
        conformance.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "conformance")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "path-selection"; yang_parent_name = "xro-attribute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BfdOverLsp::BfdOverLsp()
    :
    tail(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Tail>())
	,head(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Head>())
{
    tail->parent = this;
    head->parent = this;

    yang_name = "bfd-over-lsp"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::has_data() const
{
    return (tail !=  nullptr && tail->has_data())
	|| (head !=  nullptr && head->has_data());
}

bool MplsTe::GlobalAttributes::BfdOverLsp::has_operation() const
{
    return is_set(yfilter)
	|| (tail !=  nullptr && tail->has_operation())
	|| (head !=  nullptr && head->has_operation());
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BfdOverLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tail")
    {
        if(tail == nullptr)
        {
            tail = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Tail>();
        }
        return tail;
    }

    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Head>();
        }
        return head;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BfdOverLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tail != nullptr)
    {
        children["tail"] = tail;
    }

    if(head != nullptr)
    {
        children["head"] = head;
    }

    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::BfdOverLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tail" || name == "head")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BfdOverLsp::Tail::Tail()
    :
    multiplier{YType::uint32, "multiplier"},
    minimum_interval{YType::uint32, "minimum-interval"}
{

    yang_name = "tail"; yang_parent_name = "bfd-over-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BfdOverLsp::Tail::~Tail()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Tail::has_data() const
{
    return multiplier.is_set
	|| minimum_interval.is_set;
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Tail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(minimum_interval.yfilter);
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bfd-over-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::Tail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BfdOverLsp::Tail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Tail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier" || name == "minimum-interval")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BfdOverLsp::Head::Head()
    :
    reopt_timeout{YType::uint32, "reopt-timeout"},
    down_action{YType::enumeration, "down-action"}
{

    yang_name = "head"; yang_parent_name = "bfd-over-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BfdOverLsp::Head::~Head()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Head::has_data() const
{
    return reopt_timeout.is_set
	|| down_action.is_set;
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reopt_timeout.yfilter)
	|| ydk::is_set(down_action.yfilter);
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Head::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bfd-over-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BfdOverLsp::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reopt_timeout.is_set || is_set(reopt_timeout.yfilter)) leaf_name_data.push_back(reopt_timeout.get_name_leafdata());
    if (down_action.is_set || is_set(down_action.yfilter)) leaf_name_data.push_back(down_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BfdOverLsp::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reopt-timeout")
    {
        reopt_timeout = value;
        reopt_timeout.value_namespace = name_space;
        reopt_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-action")
    {
        down_action = value;
        down_action.value_namespace = name_space;
        down_action.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BfdOverLsp::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reopt-timeout")
    {
        reopt_timeout.yfilter = yfilter;
    }
    if(value_path == "down-action")
    {
        down_action.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reopt-timeout" || name == "down-action")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::BandwidthAccounting()
    :
    sampling_interval{YType::uint32, "sampling-interval"},
    adjustment_factor{YType::uint32, "adjustment-factor"},
    collection_type_rsvp_te{YType::boolean, "collection-type-rsvp-te"},
    enable{YType::empty, "enable"}
    	,
    application(std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting::Application>())
	,account_flooding_threshold(std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold>())
{
    application->parent = this;
    account_flooding_threshold->parent = this;

    yang_name = "bandwidth-accounting"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::~BandwidthAccounting()
{
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::has_data() const
{
    return sampling_interval.is_set
	|| adjustment_factor.is_set
	|| collection_type_rsvp_te.is_set
	|| enable.is_set
	|| (application !=  nullptr && application->has_data())
	|| (account_flooding_threshold !=  nullptr && account_flooding_threshold->has_data());
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sampling_interval.yfilter)
	|| ydk::is_set(adjustment_factor.yfilter)
	|| ydk::is_set(collection_type_rsvp_te.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (account_flooding_threshold !=  nullptr && account_flooding_threshold->has_operation());
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BandwidthAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampling_interval.is_set || is_set(sampling_interval.yfilter)) leaf_name_data.push_back(sampling_interval.get_name_leafdata());
    if (adjustment_factor.is_set || is_set(adjustment_factor.yfilter)) leaf_name_data.push_back(adjustment_factor.get_name_leafdata());
    if (collection_type_rsvp_te.is_set || is_set(collection_type_rsvp_te.yfilter)) leaf_name_data.push_back(collection_type_rsvp_te.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BandwidthAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting::Application>();
        }
        return application;
    }

    if(child_yang_name == "account-flooding-threshold")
    {
        if(account_flooding_threshold == nullptr)
        {
            account_flooding_threshold = std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold>();
        }
        return account_flooding_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BandwidthAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(account_flooding_threshold != nullptr)
    {
        children["account-flooding-threshold"] = account_flooding_threshold;
    }

    return children;
}

void MplsTe::GlobalAttributes::BandwidthAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sampling-interval")
    {
        sampling_interval = value;
        sampling_interval.value_namespace = name_space;
        sampling_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-factor")
    {
        adjustment_factor = value;
        adjustment_factor.value_namespace = name_space;
        adjustment_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type-rsvp-te")
    {
        collection_type_rsvp_te = value;
        collection_type_rsvp_te.value_namespace = name_space;
        collection_type_rsvp_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BandwidthAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sampling-interval")
    {
        sampling_interval.yfilter = yfilter;
    }
    if(value_path == "adjustment-factor")
    {
        adjustment_factor.yfilter = yfilter;
    }
    if(value_path == "collection-type-rsvp-te")
    {
        collection_type_rsvp_te.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "account-flooding-threshold" || name == "sampling-interval" || name == "adjustment-factor" || name == "collection-type-rsvp-te" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::Application::Application()
    :
    application_enforced{YType::boolean, "application-enforced"},
    application_interval{YType::uint32, "application-interval"}
{

    yang_name = "application"; yang_parent_name = "bandwidth-accounting"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::Application::~Application()
{
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::Application::has_data() const
{
    return application_enforced.is_set
	|| application_interval.is_set;
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(application_interval.yfilter);
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bandwidth-accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::BandwidthAccounting::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-interval")
    {
        application_interval = value;
        application_interval.value_namespace = name_space;
        application_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BandwidthAccounting::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "application-interval")
    {
        application_interval.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-enforced" || name == "application-interval")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::AccountFloodingThreshold()
    :
    up_threshold{YType::uint32, "up-threshold"},
    down_threshold{YType::uint32, "down-threshold"}
{

    yang_name = "account-flooding-threshold"; yang_parent_name = "bandwidth-accounting"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::~AccountFloodingThreshold()
{
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::has_data() const
{
    return up_threshold.is_set
	|| down_threshold.is_set;
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_threshold.yfilter)
	|| ydk::is_set(down_threshold.yfilter);
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bandwidth-accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-flooding-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_threshold.is_set || is_set(up_threshold.yfilter)) leaf_name_data.push_back(up_threshold.get_name_leafdata());
    if (down_threshold.is_set || is_set(down_threshold.yfilter)) leaf_name_data.push_back(down_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-threshold")
    {
        up_threshold = value;
        up_threshold.value_namespace = name_space;
        up_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-threshold")
    {
        down_threshold = value;
        down_threshold.value_namespace = name_space;
        down_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-threshold")
    {
        up_threshold.yfilter = yfilter;
    }
    if(value_path == "down-threshold")
    {
        down_threshold.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-threshold" || name == "down-threshold")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::PceAttributes()
    :
    request_timeout{YType::uint32, "request-timeout"},
    reoptimize_period{YType::uint32, "reoptimize-period"},
    address{YType::str, "address"},
    deadtimer{YType::uint32, "deadtimer"},
    keepalive{YType::uint32, "keepalive"},
    keepalive_tolerance{YType::uint32, "keepalive-tolerance"},
    peer_source_addr{YType::str, "peer-source-addr"},
    speaker_entity_id{YType::str, "speaker-entity-id"},
    segment_routing{YType::empty, "segment-routing"},
    password{YType::str, "password"},
    keychain{YType::str, "keychain"},
    precedence{YType::uint32, "precedence"}
    	,
    pce_stateful(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful>())
	,timer(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Timer>())
	,peers(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers>())
	,logging(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging>())
{
    pce_stateful->parent = this;
    timer->parent = this;
    peers->parent = this;
    logging->parent = this;

    yang_name = "pce-attributes"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::~PceAttributes()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::has_data() const
{
    return request_timeout.is_set
	|| reoptimize_period.is_set
	|| address.is_set
	|| deadtimer.is_set
	|| keepalive.is_set
	|| keepalive_tolerance.is_set
	|| peer_source_addr.is_set
	|| speaker_entity_id.is_set
	|| segment_routing.is_set
	|| password.is_set
	|| keychain.is_set
	|| precedence.is_set
	|| (pce_stateful !=  nullptr && pce_stateful->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request_timeout.yfilter)
	|| ydk::is_set(reoptimize_period.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(deadtimer.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(keepalive_tolerance.yfilter)
	|| ydk::is_set(peer_source_addr.yfilter)
	|| ydk::is_set(speaker_entity_id.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| (pce_stateful !=  nullptr && pce_stateful->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_timeout.is_set || is_set(request_timeout.yfilter)) leaf_name_data.push_back(request_timeout.get_name_leafdata());
    if (reoptimize_period.is_set || is_set(reoptimize_period.yfilter)) leaf_name_data.push_back(reoptimize_period.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (deadtimer.is_set || is_set(deadtimer.yfilter)) leaf_name_data.push_back(deadtimer.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (keepalive_tolerance.is_set || is_set(keepalive_tolerance.yfilter)) leaf_name_data.push_back(keepalive_tolerance.get_name_leafdata());
    if (peer_source_addr.is_set || is_set(peer_source_addr.yfilter)) leaf_name_data.push_back(peer_source_addr.get_name_leafdata());
    if (speaker_entity_id.is_set || is_set(speaker_entity_id.yfilter)) leaf_name_data.push_back(speaker_entity_id.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-stateful")
    {
        if(pce_stateful == nullptr)
        {
            pce_stateful = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful>();
        }
        return pce_stateful;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pce_stateful != nullptr)
    {
        children["pce-stateful"] = pce_stateful;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-timeout")
    {
        request_timeout = value;
        request_timeout.value_namespace = name_space;
        request_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-period")
    {
        reoptimize_period = value;
        reoptimize_period.value_namespace = name_space;
        reoptimize_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtimer")
    {
        deadtimer = value;
        deadtimer.value_namespace = name_space;
        deadtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-tolerance")
    {
        keepalive_tolerance = value;
        keepalive_tolerance.value_namespace = name_space;
        keepalive_tolerance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-source-addr")
    {
        peer_source_addr = value;
        peer_source_addr.value_namespace = name_space;
        peer_source_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-entity-id")
    {
        speaker_entity_id = value;
        speaker_entity_id.value_namespace = name_space;
        speaker_entity_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-timeout")
    {
        request_timeout.yfilter = yfilter;
    }
    if(value_path == "reoptimize-period")
    {
        reoptimize_period.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "deadtimer")
    {
        deadtimer.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "keepalive-tolerance")
    {
        keepalive_tolerance.yfilter = yfilter;
    }
    if(value_path == "peer-source-addr")
    {
        peer_source_addr.yfilter = yfilter;
    }
    if(value_path == "speaker-entity-id")
    {
        speaker_entity_id.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-stateful" || name == "timer" || name == "peers" || name == "logging" || name == "request-timeout" || name == "reoptimize-period" || name == "address" || name == "deadtimer" || name == "keepalive" || name == "keepalive-tolerance" || name == "peer-source-addr" || name == "speaker-entity-id" || name == "segment-routing" || name == "password" || name == "keychain" || name == "precedence")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::PceStateful()
    :
    fast_repair{YType::empty, "fast-repair"},
    instantiation{YType::empty, "instantiation"},
    cisco_extension{YType::empty, "cisco-extension"},
    delegation{YType::empty, "delegation"},
    report{YType::empty, "report"},
    enable{YType::empty, "enable"}
    	,
    stateful_timers(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers>())
{
    stateful_timers->parent = this;

    yang_name = "pce-stateful"; yang_parent_name = "pce-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::~PceStateful()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::has_data() const
{
    return fast_repair.is_set
	|| instantiation.is_set
	|| cisco_extension.is_set
	|| delegation.is_set
	|| report.is_set
	|| enable.is_set
	|| (stateful_timers !=  nullptr && stateful_timers->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_repair.yfilter)
	|| ydk::is_set(instantiation.yfilter)
	|| ydk::is_set(cisco_extension.yfilter)
	|| ydk::is_set(delegation.yfilter)
	|| ydk::is_set(report.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (stateful_timers !=  nullptr && stateful_timers->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-stateful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_repair.is_set || is_set(fast_repair.yfilter)) leaf_name_data.push_back(fast_repair.get_name_leafdata());
    if (instantiation.is_set || is_set(instantiation.yfilter)) leaf_name_data.push_back(instantiation.get_name_leafdata());
    if (cisco_extension.is_set || is_set(cisco_extension.yfilter)) leaf_name_data.push_back(cisco_extension.get_name_leafdata());
    if (delegation.is_set || is_set(delegation.yfilter)) leaf_name_data.push_back(delegation.get_name_leafdata());
    if (report.is_set || is_set(report.yfilter)) leaf_name_data.push_back(report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stateful-timers")
    {
        if(stateful_timers == nullptr)
        {
            stateful_timers = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers>();
        }
        return stateful_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stateful_timers != nullptr)
    {
        children["stateful-timers"] = stateful_timers;
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-repair")
    {
        fast_repair = value;
        fast_repair.value_namespace = name_space;
        fast_repair.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instantiation")
    {
        instantiation = value;
        instantiation.value_namespace = name_space;
        instantiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extension")
    {
        cisco_extension = value;
        cisco_extension.value_namespace = name_space;
        cisco_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation")
    {
        delegation = value;
        delegation.value_namespace = name_space;
        delegation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report")
    {
        report = value;
        report.value_namespace = name_space;
        report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-repair")
    {
        fast_repair.yfilter = yfilter;
    }
    if(value_path == "instantiation")
    {
        instantiation.yfilter = yfilter;
    }
    if(value_path == "cisco-extension")
    {
        cisco_extension.yfilter = yfilter;
    }
    if(value_path == "delegation")
    {
        delegation.yfilter = yfilter;
    }
    if(value_path == "report")
    {
        report.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stateful-timers" || name == "fast-repair" || name == "instantiation" || name == "cisco-extension" || name == "delegation" || name == "report" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::StatefulTimers()
    :
    redelegation_timeout{YType::uint32, "redelegation-timeout"},
    state_timeout{YType::uint32, "state-timeout"}
{

    yang_name = "stateful-timers"; yang_parent_name = "pce-stateful"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::~StatefulTimers()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::has_data() const
{
    return redelegation_timeout.is_set
	|| state_timeout.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redelegation_timeout.yfilter)
	|| ydk::is_set(state_timeout.yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/pce-stateful/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stateful-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redelegation_timeout.is_set || is_set(redelegation_timeout.yfilter)) leaf_name_data.push_back(redelegation_timeout.get_name_leafdata());
    if (state_timeout.is_set || is_set(state_timeout.yfilter)) leaf_name_data.push_back(state_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redelegation-timeout")
    {
        redelegation_timeout = value;
        redelegation_timeout.value_namespace = name_space;
        redelegation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timeout")
    {
        state_timeout = value;
        state_timeout.value_namespace = name_space;
        state_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redelegation-timeout")
    {
        redelegation_timeout.yfilter = yfilter;
    }
    if(value_path == "state-timeout")
    {
        state_timeout.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redelegation-timeout" || name == "state-timeout")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Timer::Timer()
{

    yang_name = "timer"; yang_parent_name = "pce-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Timer::~Timer()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Timer::has_data() const
{
    return false;
}

bool MplsTe::GlobalAttributes::PceAttributes::Timer::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PceAttributes::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "pce-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Peers::~Peers()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::Peer()
    :
    pce_peer_address{YType::str, "pce-peer-address"},
    enable{YType::empty, "enable"},
    password{YType::str, "password"},
    keychain{YType::str, "keychain"},
    precedence{YType::uint32, "precedence"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::~Peer()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::has_data() const
{
    return pce_peer_address.is_set
	|| enable.is_set
	|| password.is_set
	|| keychain.is_set
	|| precedence.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_peer_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[pce-peer-address='" <<pce_peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_peer_address.is_set || is_set(pce_peer_address.yfilter)) leaf_name_data.push_back(pce_peer_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-peer-address")
    {
        pce_peer_address = value;
        pce_peer_address.value_namespace = name_space;
        pce_peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-peer-address")
    {
        pce_peer_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-peer-address" || name == "enable" || name == "password" || name == "keychain" || name == "precedence")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Logging()
    :
    events(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging::Events>())
{
    events->parent = this;

    yang_name = "logging"; yang_parent_name = "pce-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::has_data() const
{
    return (events !=  nullptr && events->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (events !=  nullptr && events->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging::Events>();
        }
        return events;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(events != nullptr)
    {
        children["events"] = events;
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Events::Events()
    :
    peer_status{YType::empty, "peer-status"}
{

    yang_name = "events"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Events::~Events()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::Events::has_data() const
{
    return peer_status.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_status.yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_status.is_set || is_set(peer_status.yfilter)) leaf_name_data.push_back(peer_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-status")
    {
        peer_status = value;
        peer_status.value_namespace = name_space;
        peer_status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-status")
    {
        peer_status.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-status")
        return true;
    return false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOutOfResource()
    :
    lsp_oor_red_state(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState>())
	,lsp_oor_yellow_state(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState>())
{
    lsp_oor_red_state->parent = this;
    lsp_oor_yellow_state->parent = this;

    yang_name = "lsp-out-of-resource"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::LspOutOfResource::~LspOutOfResource()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::has_data() const
{
    return (lsp_oor_red_state !=  nullptr && lsp_oor_red_state->has_data())
	|| (lsp_oor_yellow_state !=  nullptr && lsp_oor_yellow_state->has_data());
}

bool MplsTe::GlobalAttributes::LspOutOfResource::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_oor_red_state !=  nullptr && lsp_oor_red_state->has_operation())
	|| (lsp_oor_yellow_state !=  nullptr && lsp_oor_yellow_state->has_operation());
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-out-of-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::LspOutOfResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-oor-red-state")
    {
        if(lsp_oor_red_state == nullptr)
        {
            lsp_oor_red_state = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState>();
        }
        return lsp_oor_red_state;
    }

    if(child_yang_name == "lsp-oor-yellow-state")
    {
        if(lsp_oor_yellow_state == nullptr)
        {
            lsp_oor_yellow_state = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState>();
        }
        return lsp_oor_yellow_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::LspOutOfResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsp_oor_red_state != nullptr)
    {
        children["lsp-oor-red-state"] = lsp_oor_red_state;
    }

    if(lsp_oor_yellow_state != nullptr)
    {
        children["lsp-oor-yellow-state"] = lsp_oor_yellow_state;
    }

    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::LspOutOfResource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-oor-red-state" || name == "lsp-oor-yellow-state")
        return true;
    return false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::LspOorRedState()
    :
    all_transit_lsp_threshold{YType::int32, "all-transit-lsp-threshold"},
    unprotected_transit_lsp_threshold{YType::int32, "unprotected-transit-lsp-threshold"}
{

    yang_name = "lsp-oor-red-state"; yang_parent_name = "lsp-out-of-resource"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::~LspOorRedState()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::has_data() const
{
    return all_transit_lsp_threshold.is_set
	|| unprotected_transit_lsp_threshold.is_set;
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_transit_lsp_threshold.yfilter)
	|| ydk::is_set(unprotected_transit_lsp_threshold.yfilter);
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/lsp-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-red-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_transit_lsp_threshold.is_set || is_set(all_transit_lsp_threshold.yfilter)) leaf_name_data.push_back(all_transit_lsp_threshold.get_name_leafdata());
    if (unprotected_transit_lsp_threshold.is_set || is_set(unprotected_transit_lsp_threshold.yfilter)) leaf_name_data.push_back(unprotected_transit_lsp_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold = value;
        all_transit_lsp_threshold.value_namespace = name_space;
        all_transit_lsp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold = value;
        unprotected_transit_lsp_threshold.value_namespace = name_space;
        unprotected_transit_lsp_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold.yfilter = yfilter;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-transit-lsp-threshold" || name == "unprotected-transit-lsp-threshold")
        return true;
    return false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::LspOorYellowState()
    :
    all_transit_lsp_threshold{YType::int32, "all-transit-lsp-threshold"},
    unprotected_transit_lsp_threshold{YType::int32, "unprotected-transit-lsp-threshold"}
{

    yang_name = "lsp-oor-yellow-state"; yang_parent_name = "lsp-out-of-resource"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::~LspOorYellowState()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::has_data() const
{
    return all_transit_lsp_threshold.is_set
	|| unprotected_transit_lsp_threshold.is_set;
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_transit_lsp_threshold.yfilter)
	|| ydk::is_set(unprotected_transit_lsp_threshold.yfilter);
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/lsp-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-yellow-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_transit_lsp_threshold.is_set || is_set(all_transit_lsp_threshold.yfilter)) leaf_name_data.push_back(all_transit_lsp_threshold.get_name_leafdata());
    if (unprotected_transit_lsp_threshold.is_set || is_set(unprotected_transit_lsp_threshold.yfilter)) leaf_name_data.push_back(unprotected_transit_lsp_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold = value;
        all_transit_lsp_threshold.value_namespace = name_space;
        all_transit_lsp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold = value;
        unprotected_transit_lsp_threshold.value_namespace = name_space;
        unprotected_transit_lsp_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold.yfilter = yfilter;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-transit-lsp-threshold" || name == "unprotected-transit-lsp-threshold")
        return true;
    return false;
}

MplsTe::GlobalAttributes::SoftPreemption::SoftPreemption()
    :
    timeout{YType::uint32, "timeout"},
    frr_rewrite{YType::empty, "frr-rewrite"},
    enable{YType::boolean, "enable"}
{

    yang_name = "soft-preemption"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::GlobalAttributes::SoftPreemption::has_data() const
{
    return timeout.is_set
	|| frr_rewrite.is_set
	|| enable.is_set;
}

bool MplsTe::GlobalAttributes::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(frr_rewrite.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsTe::GlobalAttributes::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (frr_rewrite.is_set || is_set(frr_rewrite.yfilter)) leaf_name_data.push_back(frr_rewrite.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-rewrite")
    {
        frr_rewrite = value;
        frr_rewrite.value_namespace = name_space;
        frr_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "frr-rewrite")
    {
        frr_rewrite.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "frr-rewrite" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::FastReroute::FastReroute()
    :
    timers(std::make_shared<MplsTe::GlobalAttributes::FastReroute::Timers>())
{
    timers->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::FastReroute::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool MplsTe::GlobalAttributes::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string MplsTe::GlobalAttributes::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::FastReroute::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void MplsTe::GlobalAttributes::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

MplsTe::GlobalAttributes::FastReroute::Timers::Timers()
    :
    hold_backup{YType::uint32, "hold-backup"},
    promotion{YType::uint32, "promotion"}
{

    yang_name = "timers"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::FastReroute::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::FastReroute::Timers::has_data() const
{
    return hold_backup.is_set
	|| promotion.is_set;
}

bool MplsTe::GlobalAttributes::FastReroute::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_backup.yfilter)
	|| ydk::is_set(promotion.yfilter);
}

std::string MplsTe::GlobalAttributes::FastReroute::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::FastReroute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::FastReroute::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_backup.is_set || is_set(hold_backup.yfilter)) leaf_name_data.push_back(hold_backup.get_name_leafdata());
    if (promotion.is_set || is_set(promotion.yfilter)) leaf_name_data.push_back(promotion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::FastReroute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::FastReroute::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::FastReroute::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-backup")
    {
        hold_backup = value;
        hold_backup.value_namespace = name_space;
        hold_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promotion")
    {
        promotion = value;
        promotion.value_namespace = name_space;
        promotion.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::FastReroute::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-backup")
    {
        hold_backup.yfilter = yfilter;
    }
    if(value_path == "promotion")
    {
        promotion.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::FastReroute::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-backup" || name == "promotion")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::PathSelection()
    :
    cost_limit{YType::uint32, "cost-limit"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    metric{YType::enumeration, "metric"},
    loose_domain_match{YType::boolean, "loose-domain-match"}
    	,
    loose_metrics(std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics>())
	,invalidation(std::make_shared<MplsTe::GlobalAttributes::PathSelection::Invalidation>())
	,ignore_overload_role(std::make_shared<MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole>())
	,loose_affinities(std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities>())
{
    loose_metrics->parent = this;
    invalidation->parent = this;
    ignore_overload_role->parent = this;
    loose_affinities->parent = this;

    yang_name = "path-selection"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::PathSelection::has_data() const
{
    return cost_limit.is_set
	|| tiebreaker.is_set
	|| metric.is_set
	|| loose_domain_match.is_set
	|| (loose_metrics !=  nullptr && loose_metrics->has_data())
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (ignore_overload_role !=  nullptr && ignore_overload_role->has_data())
	|| (loose_affinities !=  nullptr && loose_affinities->has_data());
}

bool MplsTe::GlobalAttributes::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(loose_domain_match.yfilter)
	|| (loose_metrics !=  nullptr && loose_metrics->has_operation())
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (ignore_overload_role !=  nullptr && ignore_overload_role->has_operation())
	|| (loose_affinities !=  nullptr && loose_affinities->has_operation());
}

std::string MplsTe::GlobalAttributes::PathSelection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (loose_domain_match.is_set || is_set(loose_domain_match.yfilter)) leaf_name_data.push_back(loose_domain_match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loose-metrics")
    {
        if(loose_metrics == nullptr)
        {
            loose_metrics = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics>();
        }
        return loose_metrics;
    }

    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "ignore-overload-role")
    {
        if(ignore_overload_role == nullptr)
        {
            ignore_overload_role = std::make_shared<MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole>();
        }
        return ignore_overload_role;
    }

    if(child_yang_name == "loose-affinities")
    {
        if(loose_affinities == nullptr)
        {
            loose_affinities = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities>();
        }
        return loose_affinities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(loose_metrics != nullptr)
    {
        children["loose-metrics"] = loose_metrics;
    }

    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(ignore_overload_role != nullptr)
    {
        children["ignore-overload-role"] = ignore_overload_role;
    }

    if(loose_affinities != nullptr)
    {
        children["loose-affinities"] = loose_affinities;
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loose-domain-match")
    {
        loose_domain_match = value;
        loose_domain_match.value_namespace = name_space;
        loose_domain_match.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "loose-domain-match")
    {
        loose_domain_match.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose-metrics" || name == "invalidation" || name == "ignore-overload-role" || name == "loose-affinities" || name == "cost-limit" || name == "tiebreaker" || name == "metric" || name == "loose-domain-match")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetrics()
{

    yang_name = "loose-metrics"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::~LooseMetrics()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::has_data() const
{
    for (std::size_t index=0; index<loose_metric.size(); index++)
    {
        if(loose_metric[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::has_operation() const
{
    for (std::size_t index=0; index<loose_metric.size(); index++)
    {
        if(loose_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loose-metric")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric>();
        c->parent = this;
        loose_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : loose_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose-metric")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::LooseMetric()
    :
    class_type{YType::uint32, "class-type"},
    metric_type{YType::enumeration, "metric-type"}
{

    yang_name = "loose-metric"; yang_parent_name = "loose-metrics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::~LooseMetric()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::has_data() const
{
    return class_type.is_set
	|| metric_type.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/loose-metrics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-metric" <<"[class-type='" <<class_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "metric-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::Invalidation::Invalidation()
    :
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::enumeration, "path-invalidation-action"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::PathSelection::Invalidation::has_data() const
{
    return path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::Invalidation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-timeout" || name == "path-invalidation-action")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::IgnoreOverloadRole()
    :
    head{YType::boolean, "head"},
    mid{YType::boolean, "mid"},
    tail{YType::boolean, "tail"}
{

    yang_name = "ignore-overload-role"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::~IgnoreOverloadRole()
{
}

bool MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::has_data() const
{
    return head.is_set
	|| mid.is_set
	|| tail.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(mid.yfilter)
	|| ydk::is_set(tail.yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore-overload-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (mid.is_set || is_set(mid.yfilter)) leaf_name_data.push_back(mid.get_name_leafdata());
    if (tail.is_set || is_set(tail.yfilter)) leaf_name_data.push_back(tail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "head")
    {
        head = value;
        head.value_namespace = name_space;
        head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mid")
    {
        mid = value;
        mid.value_namespace = name_space;
        mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail")
    {
        tail = value;
        tail.value_namespace = name_space;
        tail.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "mid")
    {
        mid.yfilter = yfilter;
    }
    if(value_path == "tail")
    {
        tail.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "mid" || name == "tail")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinities()
{

    yang_name = "loose-affinities"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::~LooseAffinities()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::has_data() const
{
    for (std::size_t index=0; index<loose_affinity.size(); index++)
    {
        if(loose_affinity[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::has_operation() const
{
    for (std::size_t index=0; index<loose_affinity.size(); index++)
    {
        if(loose_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-affinities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loose-affinity")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity>();
        c->parent = this;
        loose_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : loose_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose-affinity")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::LooseAffinity()
    :
    class_type{YType::uint32, "class-type"},
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "loose-affinity"; yang_parent_name = "loose-affinities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::~LooseAffinity()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::has_data() const
{
    return class_type.is_set
	|| affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/loose-affinities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-affinity" <<"[class-type='" <<class_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMappings()
{

    yang_name = "affinity-mappings"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AffinityMappings::~AffinityMappings()
{
}

bool MplsTe::GlobalAttributes::AffinityMappings::has_data() const
{
    for (std::size_t index=0; index<affinity_mapping.size(); index++)
    {
        if(affinity_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AffinityMappings::has_operation() const
{
    for (std::size_t index=0; index<affinity_mapping.size(); index++)
    {
        if(affinity_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::AffinityMappings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AffinityMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AffinityMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AffinityMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mapping")
    {
        auto c = std::make_shared<MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping>();
        c->parent = this;
        affinity_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AffinityMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : affinity_mapping)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::AffinityMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::AffinityMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::AffinityMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mapping")
        return true;
    return false;
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::AffinityMapping()
    :
    affinity_name{YType::str, "affinity-name"},
    value_type{YType::enumeration, "value-type"},
    value_{YType::str, "value"}
{

    yang_name = "affinity-mapping"; yang_parent_name = "affinity-mappings"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::~AffinityMapping()
{
}

bool MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::has_data() const
{
    return affinity_name.is_set
	|| value_type.is_set
	|| value_.is_set;
}

bool MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(value_type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/affinity-mappings/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mapping" <<"[affinity-name='" <<affinity_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (value_type.is_set || is_set(value_type.yfilter)) leaf_name_data.push_back(value_type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-type")
    {
        value_type = value;
        value_type.value_namespace = name_space;
        value_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "value-type")
    {
        value_type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-name" || name == "value-type" || name == "value")
        return true;
    return false;
}

MplsTe::TransportProfile::TransportProfile()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"}
    	,
    fault(std::make_shared<MplsTe::TransportProfile::Fault>())
	,alarm(std::make_shared<MplsTe::TransportProfile::Alarm>())
	,bfd(std::make_shared<MplsTe::TransportProfile::Bfd>())
	,midpoints(std::make_shared<MplsTe::TransportProfile::Midpoints>())
{
    fault->parent = this;
    alarm->parent = this;
    bfd->parent = this;
    midpoints->parent = this;

    yang_name = "transport-profile"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::~TransportProfile()
{
}

bool MplsTe::TransportProfile::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| (fault !=  nullptr && fault->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (midpoints !=  nullptr && midpoints->has_data());
}

bool MplsTe::TransportProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (fault !=  nullptr && fault->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (midpoints !=  nullptr && midpoints->has_operation());
}

std::string MplsTe::TransportProfile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault")
    {
        if(fault == nullptr)
        {
            fault = std::make_shared<MplsTe::TransportProfile::Fault>();
        }
        return fault;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<MplsTe::TransportProfile::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<MplsTe::TransportProfile::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "midpoints")
    {
        if(midpoints == nullptr)
        {
            midpoints = std::make_shared<MplsTe::TransportProfile::Midpoints>();
        }
        return midpoints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fault != nullptr)
    {
        children["fault"] = fault;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(midpoints != nullptr)
    {
        children["midpoints"] = midpoints;
    }

    return children;
}

void MplsTe::TransportProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault" || name == "alarm" || name == "bfd" || name == "midpoints" || name == "global-id" || name == "node-id")
        return true;
    return false;
}

MplsTe::TransportProfile::Fault::Fault()
    :
    wait_to_restore_interval{YType::uint32, "wait-to-restore-interval"},
    refresh_interval{YType::uint32, "refresh-interval"}
    	,
    protection_trigger(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger>())
{
    protection_trigger->parent = this;

    yang_name = "fault"; yang_parent_name = "transport-profile"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Fault::~Fault()
{
}

bool MplsTe::TransportProfile::Fault::has_data() const
{
    return wait_to_restore_interval.is_set
	|| refresh_interval.is_set
	|| (protection_trigger !=  nullptr && protection_trigger->has_data());
}

bool MplsTe::TransportProfile::Fault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_to_restore_interval.yfilter)
	|| ydk::is_set(refresh_interval.yfilter)
	|| (protection_trigger !=  nullptr && protection_trigger->has_operation());
}

std::string MplsTe::TransportProfile::Fault::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Fault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Fault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_to_restore_interval.is_set || is_set(wait_to_restore_interval.yfilter)) leaf_name_data.push_back(wait_to_restore_interval.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-trigger")
    {
        if(protection_trigger == nullptr)
        {
            protection_trigger = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger>();
        }
        return protection_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Fault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protection_trigger != nullptr)
    {
        children["protection-trigger"] = protection_trigger;
    }

    return children;
}

void MplsTe::TransportProfile::Fault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval = value;
        wait_to_restore_interval.value_namespace = name_space;
        wait_to_restore_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Fault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Fault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-trigger" || name == "wait-to-restore-interval" || name == "refresh-interval")
        return true;
    return false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::ProtectionTrigger()
    :
    ais{YType::empty, "ais"}
    	,
    ldi(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi>())
	,lkr(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr>())
{
    ldi->parent = this;
    lkr->parent = this;

    yang_name = "protection-trigger"; yang_parent_name = "fault"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::~ProtectionTrigger()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::has_data() const
{
    return ais.is_set
	|| (ldi !=  nullptr && ldi->has_data())
	|| (lkr !=  nullptr && lkr->has_data());
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| (ldi !=  nullptr && ldi->has_operation())
	|| (lkr !=  nullptr && lkr->has_operation());
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Fault::ProtectionTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldi")
    {
        if(ldi == nullptr)
        {
            ldi = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi>();
        }
        return ldi;
    }

    if(child_yang_name == "lkr")
    {
        if(lkr == nullptr)
        {
            lkr = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr>();
        }
        return lkr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Fault::ProtectionTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldi != nullptr)
    {
        children["ldi"] = ldi;
    }

    if(lkr != nullptr)
    {
        children["lkr"] = lkr;
    }

    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi" || name == "lkr" || name == "ais")
        return true;
    return false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::Ldi()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "ldi"; yang_parent_name = "protection-trigger"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::~Ldi()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/protection-trigger/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::Lkr()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "lkr"; yang_parent_name = "protection-trigger"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::~Lkr()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/protection-trigger/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lkr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

MplsTe::TransportProfile::Alarm::Alarm()
    :
    soak_time{YType::uint32, "soak-time"},
    enable_alarm{YType::empty, "enable-alarm"}
    	,
    suppress_event(std::make_shared<MplsTe::TransportProfile::Alarm::SuppressEvent>())
{
    suppress_event->parent = this;

    yang_name = "alarm"; yang_parent_name = "transport-profile"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Alarm::~Alarm()
{
}

bool MplsTe::TransportProfile::Alarm::has_data() const
{
    return soak_time.is_set
	|| enable_alarm.is_set
	|| (suppress_event !=  nullptr && suppress_event->has_data());
}

bool MplsTe::TransportProfile::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(soak_time.yfilter)
	|| ydk::is_set(enable_alarm.yfilter)
	|| (suppress_event !=  nullptr && suppress_event->has_operation());
}

std::string MplsTe::TransportProfile::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (soak_time.is_set || is_set(soak_time.yfilter)) leaf_name_data.push_back(soak_time.get_name_leafdata());
    if (enable_alarm.is_set || is_set(enable_alarm.yfilter)) leaf_name_data.push_back(enable_alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress-event")
    {
        if(suppress_event == nullptr)
        {
            suppress_event = std::make_shared<MplsTe::TransportProfile::Alarm::SuppressEvent>();
        }
        return suppress_event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(suppress_event != nullptr)
    {
        children["suppress-event"] = suppress_event;
    }

    return children;
}

void MplsTe::TransportProfile::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "soak-time")
    {
        soak_time = value;
        soak_time.value_namespace = name_space;
        soak_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-alarm")
    {
        enable_alarm = value;
        enable_alarm.value_namespace = name_space;
        enable_alarm.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "soak-time")
    {
        soak_time.yfilter = yfilter;
    }
    if(value_path == "enable-alarm")
    {
        enable_alarm.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress-event" || name == "soak-time" || name == "enable-alarm")
        return true;
    return false;
}

MplsTe::TransportProfile::Alarm::SuppressEvent::SuppressEvent()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "suppress-event"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Alarm::SuppressEvent::~SuppressEvent()
{
}

bool MplsTe::TransportProfile::Alarm::SuppressEvent::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Alarm::SuppressEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string MplsTe::TransportProfile::Alarm::SuppressEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/alarm/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Alarm::SuppressEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Alarm::SuppressEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Alarm::SuppressEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Alarm::SuppressEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Alarm::SuppressEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Alarm::SuppressEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Alarm::SuppressEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

MplsTe::TransportProfile::Bfd::Bfd()
    :
    detection_multiplier_standby{YType::uint32, "detection-multiplier-standby"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
    	,
    min_interval_standby(std::make_shared<MplsTe::TransportProfile::Bfd::MinIntervalStandby>())
	,min_interval(std::make_shared<MplsTe::TransportProfile::Bfd::MinInterval>())
{
    min_interval_standby->parent = this;
    min_interval->parent = this;

    yang_name = "bfd"; yang_parent_name = "transport-profile"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Bfd::~Bfd()
{
}

bool MplsTe::TransportProfile::Bfd::has_data() const
{
    return detection_multiplier_standby.is_set
	|| detection_multiplier.is_set
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_data())
	|| (min_interval !=  nullptr && min_interval->has_data());
}

bool MplsTe::TransportProfile::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier_standby.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_operation())
	|| (min_interval !=  nullptr && min_interval->has_operation());
}

std::string MplsTe::TransportProfile::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier_standby.is_set || is_set(detection_multiplier_standby.yfilter)) leaf_name_data.push_back(detection_multiplier_standby.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-interval-standby")
    {
        if(min_interval_standby == nullptr)
        {
            min_interval_standby = std::make_shared<MplsTe::TransportProfile::Bfd::MinIntervalStandby>();
        }
        return min_interval_standby;
    }

    if(child_yang_name == "min-interval")
    {
        if(min_interval == nullptr)
        {
            min_interval = std::make_shared<MplsTe::TransportProfile::Bfd::MinInterval>();
        }
        return min_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(min_interval_standby != nullptr)
    {
        children["min-interval-standby"] = min_interval_standby;
    }

    if(min_interval != nullptr)
    {
        children["min-interval"] = min_interval;
    }

    return children;
}

void MplsTe::TransportProfile::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier-standby")
    {
        detection_multiplier_standby = value;
        detection_multiplier_standby.value_namespace = name_space;
        detection_multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier-standby")
    {
        detection_multiplier_standby.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-interval-standby" || name == "min-interval" || name == "detection-multiplier-standby" || name == "detection-multiplier")
        return true;
    return false;
}

MplsTe::TransportProfile::Bfd::MinIntervalStandby::MinIntervalStandby()
    :
    interval_standby_ms{YType::uint32, "interval-standby-ms"},
    interval_standby_us{YType::uint32, "interval-standby-us"}
{

    yang_name = "min-interval-standby"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Bfd::MinIntervalStandby::~MinIntervalStandby()
{
}

bool MplsTe::TransportProfile::Bfd::MinIntervalStandby::has_data() const
{
    return interval_standby_ms.is_set
	|| interval_standby_us.is_set;
}

bool MplsTe::TransportProfile::Bfd::MinIntervalStandby::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_standby_ms.yfilter)
	|| ydk::is_set(interval_standby_us.yfilter);
}

std::string MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_standby_ms.is_set || is_set(interval_standby_ms.yfilter)) leaf_name_data.push_back(interval_standby_ms.get_name_leafdata());
    if (interval_standby_us.is_set || is_set(interval_standby_us.yfilter)) leaf_name_data.push_back(interval_standby_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Bfd::MinIntervalStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms = value;
        interval_standby_ms.value_namespace = name_space;
        interval_standby_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us = value;
        interval_standby_us.value_namespace = name_space;
        interval_standby_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Bfd::MinIntervalStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms.yfilter = yfilter;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Bfd::MinIntervalStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-standby-ms" || name == "interval-standby-us")
        return true;
    return false;
}

MplsTe::TransportProfile::Bfd::MinInterval::MinInterval()
    :
    interval_ms{YType::uint32, "interval-ms"},
    interval_us{YType::uint32, "interval-us"}
{

    yang_name = "min-interval"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Bfd::MinInterval::~MinInterval()
{
}

bool MplsTe::TransportProfile::Bfd::MinInterval::has_data() const
{
    return interval_ms.is_set
	|| interval_us.is_set;
}

bool MplsTe::TransportProfile::Bfd::MinInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_ms.yfilter)
	|| ydk::is_set(interval_us.yfilter);
}

std::string MplsTe::TransportProfile::Bfd::MinInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Bfd::MinInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Bfd::MinInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_ms.is_set || is_set(interval_ms.yfilter)) leaf_name_data.push_back(interval_ms.get_name_leafdata());
    if (interval_us.is_set || is_set(interval_us.yfilter)) leaf_name_data.push_back(interval_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::MinInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Bfd::MinInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Bfd::MinInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-ms")
    {
        interval_ms = value;
        interval_ms.value_namespace = name_space;
        interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-us")
    {
        interval_us = value;
        interval_us.value_namespace = name_space;
        interval_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Bfd::MinInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-ms")
    {
        interval_ms.yfilter = yfilter;
    }
    if(value_path == "interval-us")
    {
        interval_us.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Bfd::MinInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-ms" || name == "interval-us")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoints()
{

    yang_name = "midpoints"; yang_parent_name = "transport-profile"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Midpoints::~Midpoints()
{
}

bool MplsTe::TransportProfile::Midpoints::has_data() const
{
    for (std::size_t index=0; index<midpoint.size(); index++)
    {
        if(midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TransportProfile::Midpoints::has_operation() const
{
    for (std::size_t index=0; index<midpoint.size(); index++)
    {
        if(midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Midpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "midpoint")
    {
        auto c = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint>();
        c->parent = this;
        midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : midpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TransportProfile::Midpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TransportProfile::Midpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "midpoint")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Midpoint()
    :
    midpoint_name{YType::str, "midpoint-name"},
    tunnel_name{YType::str, "tunnel-name"},
    lsp_protect{YType::empty, "lsp-protect"},
    lsp_id{YType::uint32, "lsp-id"}
    	,
    source(nullptr) // presence node
	,destination(nullptr) // presence node
	,forward_lsp(std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp>())
	,reverse_lsp(std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp>())
{
    forward_lsp->parent = this;
    reverse_lsp->parent = this;

    yang_name = "midpoint"; yang_parent_name = "midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::~Midpoint()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::has_data() const
{
    return midpoint_name.is_set
	|| tunnel_name.is_set
	|| lsp_protect.is_set
	|| lsp_id.is_set
	|| (source !=  nullptr && source->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (forward_lsp !=  nullptr && forward_lsp->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(midpoint_name.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(lsp_protect.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (forward_lsp !=  nullptr && forward_lsp->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint" <<"[midpoint-name='" <<midpoint_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (midpoint_name.is_set || is_set(midpoint_name.yfilter)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (lsp_protect.is_set || is_set(lsp_protect.yfilter)) leaf_name_data.push_back(lsp_protect.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::Source>();
        }
        return source;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "forward-lsp")
    {
        if(forward_lsp == nullptr)
        {
            forward_lsp = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp>();
        }
        return forward_lsp;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp>();
        }
        return reverse_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(forward_lsp != nullptr)
    {
        children["forward-lsp"] = forward_lsp;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
        midpoint_name.value_namespace = name_space;
        midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-protect")
    {
        lsp_protect = value;
        lsp_protect.value_namespace = name_space;
        lsp_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "lsp-protect")
    {
        lsp_protect.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination" || name == "forward-lsp" || name == "reverse-lsp" || name == "midpoint-name" || name == "tunnel-name" || name == "lsp-protect" || name == "lsp-id")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Source::Source()
    :
    node_id{YType::str, "node-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    global_id{YType::uint32, "global-id"}
{

    yang_name = "source"; yang_parent_name = "midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Source::~Source()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Source::has_data() const
{
    return node_id.is_set
	|| tunnel_id.is_set
	|| global_id.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(global_id.yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "tunnel-id" || name == "global-id")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Destination::Destination()
    :
    node_id{YType::str, "node-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    global_id{YType::uint32, "global-id"}
{

    yang_name = "destination"; yang_parent_name = "midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Destination::~Destination()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Destination::has_data() const
{
    return node_id.is_set
	|| tunnel_id.is_set
	|| global_id.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(global_id.yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "tunnel-id" || name == "global-id")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardLsp()
    :
    forward_bandwidth{YType::uint32, "forward-bandwidth"}
    	,
    forward_io_map(nullptr) // presence node
{

    yang_name = "forward-lsp"; yang_parent_name = "midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::~ForwardLsp()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::has_data() const
{
    return forward_bandwidth.is_set
	|| (forward_io_map !=  nullptr && forward_io_map->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forward_bandwidth.yfilter)
	|| (forward_io_map !=  nullptr && forward_io_map->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_bandwidth.is_set || is_set(forward_bandwidth.yfilter)) leaf_name_data.push_back(forward_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-io-map")
    {
        if(forward_io_map == nullptr)
        {
            forward_io_map = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap>();
        }
        return forward_io_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(forward_io_map != nullptr)
    {
        children["forward-io-map"] = forward_io_map;
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-bandwidth")
    {
        forward_bandwidth = value;
        forward_bandwidth.value_namespace = name_space;
        forward_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-bandwidth")
    {
        forward_bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-io-map" || name == "forward-bandwidth")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::ForwardIoMap()
    :
    in_label{YType::uint32, "in-label"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"}
{

    yang_name = "forward-io-map"; yang_parent_name = "forward-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::~ForwardIoMap()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::has_data() const
{
    return in_label.is_set
	|| out_label.is_set
	|| out_link.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-io-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-label" || name == "out-label" || name == "out-link")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseLsp()
    :
    reverse_bandwidth{YType::uint32, "reverse-bandwidth"}
    	,
    reverse_io_map(nullptr) // presence node
{

    yang_name = "reverse-lsp"; yang_parent_name = "midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::~ReverseLsp()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::has_data() const
{
    return reverse_bandwidth.is_set
	|| (reverse_io_map !=  nullptr && reverse_io_map->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_bandwidth.yfilter)
	|| (reverse_io_map !=  nullptr && reverse_io_map->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_bandwidth.is_set || is_set(reverse_bandwidth.yfilter)) leaf_name_data.push_back(reverse_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-io-map")
    {
        if(reverse_io_map == nullptr)
        {
            reverse_io_map = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap>();
        }
        return reverse_io_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reverse_io_map != nullptr)
    {
        children["reverse-io-map"] = reverse_io_map;
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth = value;
        reverse_bandwidth.value_namespace = name_space;
        reverse_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-io-map" || name == "reverse-bandwidth")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::ReverseIoMap()
    :
    in_label{YType::uint32, "in-label"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"}
{

    yang_name = "reverse-io-map"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::~ReverseIoMap()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::has_data() const
{
    return in_label.is_set
	|| out_label.is_set
	|| out_link.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-io-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-label" || name == "out-label" || name == "out-link")
        return true;
    return false;
}

MplsTe::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Interfaces::~Interfaces()
{
}

bool MplsTe::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<MplsTe::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    transport_profile_link(std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink>())
	,lcac(std::make_shared<MplsTe::Interfaces::Interface::Lcac>())
	,global_attributes(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes>())
{
    transport_profile_link->parent = this;
    lcac->parent = this;
    global_attributes->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Interfaces::Interface::~Interface()
{
}

bool MplsTe::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (transport_profile_link !=  nullptr && transport_profile_link->has_data())
	|| (lcac !=  nullptr && lcac->has_data())
	|| (global_attributes !=  nullptr && global_attributes->has_data());
}

bool MplsTe::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (transport_profile_link !=  nullptr && transport_profile_link->has_operation())
	|| (lcac !=  nullptr && lcac->has_operation())
	|| (global_attributes !=  nullptr && global_attributes->has_operation());
}

std::string MplsTe::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-profile-link")
    {
        if(transport_profile_link == nullptr)
        {
            transport_profile_link = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink>();
        }
        return transport_profile_link;
    }

    if(child_yang_name == "lcac")
    {
        if(lcac == nullptr)
        {
            lcac = std::make_shared<MplsTe::Interfaces::Interface::Lcac>();
        }
        return lcac;
    }

    if(child_yang_name == "global-attributes")
    {
        if(global_attributes == nullptr)
        {
            global_attributes = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes>();
        }
        return global_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transport_profile_link != nullptr)
    {
        children["transport-profile-link"] = transport_profile_link;
    }

    if(lcac != nullptr)
    {
        children["lcac"] = lcac;
    }

    if(global_attributes != nullptr)
    {
        children["global-attributes"] = global_attributes;
    }

    return children;
}

void MplsTe::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-profile-link" || name == "lcac" || name == "global-attributes" || name == "interface-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::TransportProfileLink::TransportProfileLink()
    :
    links(std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links>())
{
    links->parent = this;

    yang_name = "transport-profile-link"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::TransportProfileLink::~TransportProfileLink()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::has_data() const
{
    return (links !=  nullptr && links->has_data());
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::has_operation() const
{
    return is_set(yfilter)
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-profile-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::TransportProfileLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::TransportProfileLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(links != nullptr)
    {
        children["links"] = links;
    }

    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::TransportProfileLink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Links()
{

    yang_name = "links"; yang_parent_name = "transport-profile-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::~Links()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto c = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::Link()
    :
    link_id{YType::uint32, "link-id"},
    next_hop_type{YType::enumeration, "next-hop-type"},
    next_hop_address{YType::str, "next-hop-address"}
{

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::~Link()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::has_data() const
{
    return link_id.is_set
	|| next_hop_type.is_set
	|| next_hop_address.is_set;
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(next_hop_type.yfilter)
	|| ydk::is_set(next_hop_address.yfilter);
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.yfilter)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
        next_hop_type.value_namespace = name_space;
        next_hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id" || name == "next-hop-type" || name == "next-hop-address")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Lcac()
    :
    bfd{YType::empty, "bfd"},
    fault_oam_lockout{YType::empty, "fault-oam-lockout"},
    attribute_flags{YType::str, "attribute-flags"},
    enable{YType::empty, "enable"},
    admin_weight{YType::int32, "admin-weight"}
    	,
    switchings(std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings>())
	,flood_area(std::make_shared<MplsTe::Interfaces::Interface::Lcac::FloodArea>())
	,attribute_name_xr(std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNameXr>())
	,attribute_names(std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames>())
	,srlgs(std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs>())
	,up_thresholds(std::make_shared<MplsTe::Interfaces::Interface::Lcac::UpThresholds>())
	,down_thresholds(std::make_shared<MplsTe::Interfaces::Interface::Lcac::DownThresholds>())
{
    switchings->parent = this;
    flood_area->parent = this;
    attribute_name_xr->parent = this;
    attribute_names->parent = this;
    srlgs->parent = this;
    up_thresholds->parent = this;
    down_thresholds->parent = this;

    yang_name = "lcac"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::~Lcac()
{
}

bool MplsTe::Interfaces::Interface::Lcac::has_data() const
{
    return bfd.is_set
	|| fault_oam_lockout.is_set
	|| attribute_flags.is_set
	|| enable.is_set
	|| admin_weight.is_set
	|| (switchings !=  nullptr && switchings->has_data())
	|| (flood_area !=  nullptr && flood_area->has_data())
	|| (attribute_name_xr !=  nullptr && attribute_name_xr->has_data())
	|| (attribute_names !=  nullptr && attribute_names->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data())
	|| (up_thresholds !=  nullptr && up_thresholds->has_data())
	|| (down_thresholds !=  nullptr && down_thresholds->has_data());
}

bool MplsTe::Interfaces::Interface::Lcac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(fault_oam_lockout.yfilter)
	|| ydk::is_set(attribute_flags.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| (switchings !=  nullptr && switchings->has_operation())
	|| (flood_area !=  nullptr && flood_area->has_operation())
	|| (attribute_name_xr !=  nullptr && attribute_name_xr->has_operation())
	|| (attribute_names !=  nullptr && attribute_names->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation())
	|| (up_thresholds !=  nullptr && up_thresholds->has_operation())
	|| (down_thresholds !=  nullptr && down_thresholds->has_operation());
}

std::string MplsTe::Interfaces::Interface::Lcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (fault_oam_lockout.is_set || is_set(fault_oam_lockout.yfilter)) leaf_name_data.push_back(fault_oam_lockout.get_name_leafdata());
    if (attribute_flags.is_set || is_set(attribute_flags.yfilter)) leaf_name_data.push_back(attribute_flags.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchings")
    {
        if(switchings == nullptr)
        {
            switchings = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings>();
        }
        return switchings;
    }

    if(child_yang_name == "flood-area")
    {
        if(flood_area == nullptr)
        {
            flood_area = std::make_shared<MplsTe::Interfaces::Interface::Lcac::FloodArea>();
        }
        return flood_area;
    }

    if(child_yang_name == "attribute-name-xr")
    {
        if(attribute_name_xr == nullptr)
        {
            attribute_name_xr = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNameXr>();
        }
        return attribute_name_xr;
    }

    if(child_yang_name == "attribute-names")
    {
        if(attribute_names == nullptr)
        {
            attribute_names = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames>();
        }
        return attribute_names;
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs>();
        }
        return srlgs;
    }

    if(child_yang_name == "up-thresholds")
    {
        if(up_thresholds == nullptr)
        {
            up_thresholds = std::make_shared<MplsTe::Interfaces::Interface::Lcac::UpThresholds>();
        }
        return up_thresholds;
    }

    if(child_yang_name == "down-thresholds")
    {
        if(down_thresholds == nullptr)
        {
            down_thresholds = std::make_shared<MplsTe::Interfaces::Interface::Lcac::DownThresholds>();
        }
        return down_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switchings != nullptr)
    {
        children["switchings"] = switchings;
    }

    if(flood_area != nullptr)
    {
        children["flood-area"] = flood_area;
    }

    if(attribute_name_xr != nullptr)
    {
        children["attribute-name-xr"] = attribute_name_xr;
    }

    if(attribute_names != nullptr)
    {
        children["attribute-names"] = attribute_names;
    }

    if(srlgs != nullptr)
    {
        children["srlgs"] = srlgs;
    }

    if(up_thresholds != nullptr)
    {
        children["up-thresholds"] = up_thresholds;
    }

    if(down_thresholds != nullptr)
    {
        children["down-thresholds"] = down_thresholds;
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-oam-lockout")
    {
        fault_oam_lockout = value;
        fault_oam_lockout.value_namespace = name_space;
        fault_oam_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags = value;
        attribute_flags.value_namespace = name_space;
        attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::Lcac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "fault-oam-lockout")
    {
        fault_oam_lockout.yfilter = yfilter;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchings" || name == "flood-area" || name == "attribute-name-xr" || name == "attribute-names" || name == "srlgs" || name == "up-thresholds" || name == "down-thresholds" || name == "bfd" || name == "fault-oam-lockout" || name == "attribute-flags" || name == "enable" || name == "admin-weight")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switchings()
{

    yang_name = "switchings"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::Switchings::~Switchings()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::has_data() const
{
    for (std::size_t index=0; index<switching.size(); index++)
    {
        if(switching[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::has_operation() const
{
    for (std::size_t index=0; index<switching.size(); index++)
    {
        if(switching[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::Switchings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::Switchings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Switchings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switching")
    {
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings::Switching>();
        c->parent = this;
        switching.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::Switchings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : switching)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switching")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::Switching()
    :
    switching_id{YType::str, "switching-id"},
    encoding{YType::enumeration, "encoding"},
    capability{YType::enumeration, "capability"}
{

    yang_name = "switching"; yang_parent_name = "switchings"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::~Switching()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::has_data() const
{
    return switching_id.is_set
	|| encoding.is_set
	|| capability.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_id.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(capability.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching" <<"[switching-id='" <<switching_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_id.is_set || is_set(switching_id.yfilter)) leaf_name_data.push_back(switching_id.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-id")
    {
        switching_id = value;
        switching_id.value_namespace = name_space;
        switching_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-id")
    {
        switching_id.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switching-id" || name == "encoding" || name == "capability")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::FloodArea::FloodArea()
    :
    igp_type{YType::enumeration, "igp-type"},
    process_name{YType::str, "process-name"},
    area_id{YType::int32, "area-id"}
{

    yang_name = "flood-area"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::FloodArea::~FloodArea()
{
}

bool MplsTe::Interfaces::Interface::Lcac::FloodArea::has_data() const
{
    return igp_type.is_set
	|| process_name.is_set
	|| area_id.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::FloodArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(area_id.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::FloodArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::FloodArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::FloodArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::FloodArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::FloodArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::Lcac::FloodArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::FloodArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-type" || name == "process-name" || name == "area-id")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::AttributeNameXr()
    :
    attribute_name{YType::str, "attribute-name"}
{

    yang_name = "attribute-name-xr"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::~AttributeNameXr()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::has_data() const
{
    for (auto const & leaf : attribute_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::has_operation() const
{
    for (auto const & leaf : attribute_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attribute_name.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto attribute_name_name_datas = attribute_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attribute_name_name_datas.begin(), attribute_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-name")
    {
        attribute_name.append(value);
    }
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-name")
    {
        attribute_name.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeNames()
{

    yang_name = "attribute-names"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::~AttributeNames()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::has_data() const
{
    for (std::size_t index=0; index<attribute_name.size(); index++)
    {
        if(attribute_name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::has_operation() const
{
    for (std::size_t index=0; index<attribute_name.size(); index++)
    {
        if(attribute_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-name")
    {
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName>();
        c->parent = this;
        attribute_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : attribute_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::AttributeName()
    :
    affinity_index{YType::uint32, "affinity-index"},
    value_{YType::str, "value"}
{

    yang_name = "attribute-name"; yang_parent_name = "attribute-names"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::~AttributeName()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return affinity_index.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_index.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name" <<"[affinity-index='" <<affinity_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_index.is_set || is_set(affinity_index.yfilter)) leaf_name_data.push_back(affinity_index.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-index")
    {
        affinity_index = value;
        affinity_index.value_namespace = name_space;
        affinity_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-index")
    {
        affinity_index.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-index" || name == "value")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlgs()
{

    yang_name = "srlgs"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::~Srlgs()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::Srlg()
    :
    srlg_number{YType::uint32, "srlg-number"}
{

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::has_data() const
{
    return srlg_number.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_number.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg-number='" <<srlg_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.yfilter)) leaf_name_data.push_back(srlg_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
        srlg_number.value_namespace = name_space;
        srlg_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-number")
    {
        srlg_number.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-number")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::UpThresholds::UpThresholds()
    :
    up_threshold{YType::uint32, "up-threshold"}
{

    yang_name = "up-thresholds"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::UpThresholds::~UpThresholds()
{
}

bool MplsTe::Interfaces::Interface::Lcac::UpThresholds::has_data() const
{
    for (auto const & leaf : up_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::UpThresholds::has_operation() const
{
    for (auto const & leaf : up_threshold.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(up_threshold.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto up_threshold_name_datas = up_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_threshold_name_datas.begin(), up_threshold_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::UpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-threshold")
    {
        up_threshold.append(value);
    }
}

void MplsTe::Interfaces::Interface::Lcac::UpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-threshold")
    {
        up_threshold.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::UpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-threshold")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::DownThresholds::DownThresholds()
    :
    down_threshold{YType::uint32, "down-threshold"}
{

    yang_name = "down-thresholds"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::DownThresholds::~DownThresholds()
{
}

bool MplsTe::Interfaces::Interface::Lcac::DownThresholds::has_data() const
{
    for (auto const & leaf : down_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::DownThresholds::has_operation() const
{
    for (auto const & leaf : down_threshold.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(down_threshold.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto down_threshold_name_datas = down_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_threshold_name_datas.begin(), down_threshold_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::DownThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-threshold")
    {
        down_threshold.append(value);
    }
}

void MplsTe::Interfaces::Interface::Lcac::DownThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-threshold")
    {
        down_threshold.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::DownThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-threshold")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::GlobalAttributes()
    :
    backup_tunnels(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels>())
	,auto_tunnel(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel>())
	,backup_paths(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths>())
{
    backup_tunnels->parent = this;
    auto_tunnel->parent = this;
    backup_paths->parent = this;

    yang_name = "global-attributes"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::~GlobalAttributes()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::has_data() const
{
    return (backup_tunnels !=  nullptr && backup_tunnels->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (backup_paths !=  nullptr && backup_paths->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (backup_paths !=  nullptr && backup_paths->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnels")
    {
        if(backup_tunnels == nullptr)
        {
            backup_tunnels = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels>();
        }
        return backup_tunnels;
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "backup-paths")
    {
        if(backup_paths == nullptr)
        {
            backup_paths = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths>();
        }
        return backup_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_tunnels != nullptr)
    {
        children["backup-tunnels"] = backup_tunnels;
    }

    if(auto_tunnel != nullptr)
    {
        children["auto-tunnel"] = auto_tunnel;
    }

    if(backup_paths != nullptr)
    {
        children["backup-paths"] = backup_paths;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::GlobalAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnels" || name == "auto-tunnel" || name == "backup-paths")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnels()
{

    yang_name = "backup-tunnels"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::~BackupTunnels()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::has_data() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::has_operation() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel")
    {
        auto c = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel>();
        c->parent = this;
        backup_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::BackupTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "backup-tunnel"; yang_parent_name = "backup-tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::~BackupTunnel()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::has_data() const
{
    return tunnel_name.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup>())
{
    backup->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::~AutoTunnel()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Backup()
    :
    enable{YType::empty, "enable"},
    attribute_set{YType::str, "attribute-set"},
    next_hop_only{YType::empty, "next-hop-only"}
    	,
    exclude(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude>())
{
    exclude->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::~Backup()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::has_data() const
{
    return enable.is_set
	|| attribute_set.is_set
	|| next_hop_only.is_set
	|| (exclude !=  nullptr && exclude->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(attribute_set.yfilter)
	|| ydk::is_set(next_hop_only.yfilter)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (attribute_set.is_set || is_set(attribute_set.yfilter)) leaf_name_data.push_back(attribute_set.get_name_leafdata());
    if (next_hop_only.is_set || is_set(next_hop_only.yfilter)) leaf_name_data.push_back(next_hop_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude>();
        }
        return exclude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set")
    {
        attribute_set = value;
        attribute_set.value_namespace = name_space;
        attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-only")
    {
        next_hop_only = value;
        next_hop_only.value_namespace = name_space;
        next_hop_only.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "attribute-set")
    {
        attribute_set.yfilter = yfilter;
    }
    if(value_path == "next-hop-only")
    {
        next_hop_only.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude" || name == "enable" || name == "attribute-set" || name == "next-hop-only")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::Exclude()
    :
    srlg_mode{YType::enumeration, "srlg-mode"}
{

    yang_name = "exclude"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::~Exclude()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::has_data() const
{
    return srlg_mode.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_mode.yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_mode.is_set || is_set(srlg_mode.yfilter)) leaf_name_data.push_back(srlg_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-mode")
    {
        srlg_mode = value;
        srlg_mode.value_namespace = name_space;
        srlg_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-mode")
    {
        srlg_mode.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-mode")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPaths()
{

    yang_name = "backup-paths"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::~BackupPaths()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::has_data() const
{
    for (std::size_t index=0; index<backup_path.size(); index++)
    {
        if(backup_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::has_operation() const
{
    for (std::size_t index=0; index<backup_path.size(); index++)
    {
        if(backup_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path")
    {
        auto c = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath>();
        c->parent = this;
        backup_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::BackupPath()
    :
    tunnel_number{YType::uint32, "tunnel-number"}
{

    yang_name = "backup-path"; yang_parent_name = "backup-paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::~BackupPath()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::has_data() const
{
    return tunnel_number.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path" <<"[tunnel-number='" <<tunnel_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

MplsTe::GmplsNni::GmplsNni()
    :
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    enable_gmpls_nni{YType::empty, "enable-gmpls-nni"}
    	,
    topology_instances(std::make_shared<MplsTe::GmplsNni::TopologyInstances>())
	,tunnel_heads(std::make_shared<MplsTe::GmplsNni::TunnelHeads>())
{
    topology_instances->parent = this;
    tunnel_heads->parent = this;

    yang_name = "gmpls-nni"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::~GmplsNni()
{
}

bool MplsTe::GmplsNni::has_data() const
{
    return path_selection_metric.is_set
	|| enable_gmpls_nni.is_set
	|| (topology_instances !=  nullptr && topology_instances->has_data())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_data());
}

bool MplsTe::GmplsNni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(enable_gmpls_nni.yfilter)
	|| (topology_instances !=  nullptr && topology_instances->has_operation())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_operation());
}

std::string MplsTe::GmplsNni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-nni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (enable_gmpls_nni.is_set || is_set(enable_gmpls_nni.yfilter)) leaf_name_data.push_back(enable_gmpls_nni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-instances")
    {
        if(topology_instances == nullptr)
        {
            topology_instances = std::make_shared<MplsTe::GmplsNni::TopologyInstances>();
        }
        return topology_instances;
    }

    if(child_yang_name == "tunnel-heads")
    {
        if(tunnel_heads == nullptr)
        {
            tunnel_heads = std::make_shared<MplsTe::GmplsNni::TunnelHeads>();
        }
        return tunnel_heads;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_instances != nullptr)
    {
        children["topology-instances"] = topology_instances;
    }

    if(tunnel_heads != nullptr)
    {
        children["tunnel-heads"] = tunnel_heads;
    }

    return children;
}

void MplsTe::GmplsNni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-gmpls-nni")
    {
        enable_gmpls_nni = value;
        enable_gmpls_nni.value_namespace = name_space;
        enable_gmpls_nni.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "enable-gmpls-nni")
    {
        enable_gmpls_nni.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-instances" || name == "tunnel-heads" || name == "path-selection-metric" || name == "enable-gmpls-nni")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstances()
{

    yang_name = "topology-instances"; yang_parent_name = "gmpls-nni"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::TopologyInstances::~TopologyInstances()
{
}

bool MplsTe::GmplsNni::TopologyInstances::has_data() const
{
    for (std::size_t index=0; index<topology_instance.size(); index++)
    {
        if(topology_instance[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::has_operation() const
{
    for (std::size_t index=0; index<topology_instance.size(); index++)
    {
        if(topology_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::TopologyInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-instance")
    {
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance>();
        c->parent = this;
        topology_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TopologyInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TopologyInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-instance")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::TopologyInstance()
    :
    ospf_area_type{YType::enumeration, "ospf-area-type"},
    igp_instance_name{YType::str, "igp-instance-name"},
    igp_type{YType::enumeration, "igp-type"}
{

    yang_name = "topology-instance"; yang_parent_name = "topology-instances"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::~TopologyInstance()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::has_data() const
{
    for (std::size_t index=0; index<ospf_int.size(); index++)
    {
        if(ospf_int[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfip_addr.size(); index++)
    {
        if(ospfip_addr[index]->has_data())
            return true;
    }
    return ospf_area_type.is_set
	|| igp_instance_name.is_set
	|| igp_type.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::has_operation() const
{
    for (std::size_t index=0; index<ospf_int.size(); index++)
    {
        if(ospf_int[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfip_addr.size(); index++)
    {
        if(ospfip_addr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ospf_area_type.yfilter)
	|| ydk::is_set(igp_instance_name.yfilter)
	|| ydk::is_set(igp_type.yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/topology-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-instance" <<"[ospf-area-type='" <<ospf_area_type <<"']" <<"[igp-instance-name='" <<igp_instance_name <<"']" <<"[igp-type='" <<igp_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf_area_type.is_set || is_set(ospf_area_type.yfilter)) leaf_name_data.push_back(ospf_area_type.get_name_leafdata());
    if (igp_instance_name.is_set || is_set(igp_instance_name.yfilter)) leaf_name_data.push_back(igp_instance_name.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-int")
    {
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt>();
        c->parent = this;
        ospf_int.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfip-addr")
    {
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr>();
        c->parent = this;
        ospfip_addr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospf_int)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ospfip_addr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospf-area-type")
    {
        ospf_area_type = value;
        ospf_area_type.value_namespace = name_space;
        ospf_area_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance-name")
    {
        igp_instance_name = value;
        igp_instance_name.value_namespace = name_space;
        igp_instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospf-area-type")
    {
        ospf_area_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance-name")
    {
        igp_instance_name.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-int" || name == "ospfip-addr" || name == "ospf-area-type" || name == "igp-instance-name" || name == "igp-type")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::OspfInt()
    :
    igp_area{YType::int32, "igp-area"}
    	,
    controllers(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers>())
{
    controllers->parent = this;

    yang_name = "ospf-int"; yang_parent_name = "topology-instance"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::~OspfInt()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::has_data() const
{
    return igp_area.is_set
	|| (controllers !=  nullptr && controllers->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-int" <<"[igp-area='" <<igp_area <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers" || name == "igp-area")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controllers()
{

    yang_name = "controllers"; yang_parent_name = "ospf-int"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::~Controllers()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    admin_weight{YType::uint32, "admin-weight"},
    enable{YType::empty, "enable"},
    delay{YType::uint32, "delay"}
    	,
    tti_mode(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode>())
{
    tti_mode->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| admin_weight.is_set
	|| enable.is_set
	|| delay.is_set
	|| (tti_mode !=  nullptr && tti_mode->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (tti_mode !=  nullptr && tti_mode->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tti-mode")
    {
        if(tti_mode == nullptr)
        {
            tti_mode = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode>();
        }
        return tti_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tti_mode != nullptr)
    {
        children["tti-mode"] = tti_mode;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tti-mode" || name == "controller-name" || name == "admin-weight" || name == "enable" || name == "delay")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::TtiMode()
    :
    tti_mode_type{YType::enumeration, "tti-mode-type"},
    tcmid{YType::uint32, "tcmid"}
{

    yang_name = "tti-mode"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::~TtiMode()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::has_data() const
{
    return tti_mode_type.is_set
	|| tcmid.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tti_mode_type.yfilter)
	|| ydk::is_set(tcmid.yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tti_mode_type.is_set || is_set(tti_mode_type.yfilter)) leaf_name_data.push_back(tti_mode_type.get_name_leafdata());
    if (tcmid.is_set || is_set(tcmid.yfilter)) leaf_name_data.push_back(tcmid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tti-mode-type")
    {
        tti_mode_type = value;
        tti_mode_type.value_namespace = name_space;
        tti_mode_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcmid")
    {
        tcmid = value;
        tcmid.value_namespace = name_space;
        tcmid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tti-mode-type")
    {
        tti_mode_type.yfilter = yfilter;
    }
    if(value_path == "tcmid")
    {
        tcmid.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tti-mode-type" || name == "tcmid")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::OspfipAddr()
    :
    address{YType::str, "address"}
    	,
    controllers(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers>())
{
    controllers->parent = this;

    yang_name = "ospfip-addr"; yang_parent_name = "topology-instance"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::~OspfipAddr()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::has_data() const
{
    return address.is_set
	|| (controllers !=  nullptr && controllers->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfip-addr" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers" || name == "address")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controllers()
{

    yang_name = "controllers"; yang_parent_name = "ospfip-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::~Controllers()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    admin_weight{YType::uint32, "admin-weight"},
    enable{YType::empty, "enable"},
    delay{YType::uint32, "delay"}
    	,
    tti_mode(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode>())
{
    tti_mode->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| admin_weight.is_set
	|| enable.is_set
	|| delay.is_set
	|| (tti_mode !=  nullptr && tti_mode->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (tti_mode !=  nullptr && tti_mode->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tti-mode")
    {
        if(tti_mode == nullptr)
        {
            tti_mode = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode>();
        }
        return tti_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tti_mode != nullptr)
    {
        children["tti-mode"] = tti_mode;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tti-mode" || name == "controller-name" || name == "admin-weight" || name == "enable" || name == "delay")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::TtiMode()
    :
    tti_mode_type{YType::enumeration, "tti-mode-type"},
    tcmid{YType::uint32, "tcmid"}
{

    yang_name = "tti-mode"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::~TtiMode()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::has_data() const
{
    return tti_mode_type.is_set
	|| tcmid.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tti_mode_type.yfilter)
	|| ydk::is_set(tcmid.yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tti_mode_type.is_set || is_set(tti_mode_type.yfilter)) leaf_name_data.push_back(tti_mode_type.get_name_leafdata());
    if (tcmid.is_set || is_set(tcmid.yfilter)) leaf_name_data.push_back(tcmid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tti-mode-type")
    {
        tti_mode_type = value;
        tti_mode_type.value_namespace = name_space;
        tti_mode_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcmid")
    {
        tcmid = value;
        tcmid.value_namespace = name_space;
        tcmid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tti-mode-type")
    {
        tti_mode_type.yfilter = yfilter;
    }
    if(value_path == "tcmid")
    {
        tcmid.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tti-mode-type" || name == "tcmid")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHeads()
{

    yang_name = "tunnel-heads"; yang_parent_name = "gmpls-nni"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::TunnelHeads::~TunnelHeads()
{
}

bool MplsTe::GmplsNni::TunnelHeads::has_data() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::TunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-heads";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-head")
    {
        auto c = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead>();
        c->parent = this;
        tunnel_head.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tunnel_head)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TunnelHeads::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TunnelHeads::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-head")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::TunnelHead()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    enable{YType::empty, "enable"},
    restore_lsp_shutdown{YType::empty, "restore-lsp-shutdown"},
    current_lsp_shutdown{YType::empty, "current-lsp-shutdown"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    payload{YType::enumeration, "payload"},
    standby_lsp_shutdown{YType::empty, "standby-lsp-shutdown"},
    shutdown{YType::empty, "shutdown"},
    path_protection_attribute_set_profile{YType::str, "path-protection-attribute-set-profile"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"}
    	,
    signalled_bandwidth(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth>())
	,destination(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination>())
	,protection_switching(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching>())
	,logging(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging>())
	,path_options(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions>())
	,static_uni(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni>())
{
    signalled_bandwidth->parent = this;
    destination->parent = this;
    protection_switching->parent = this;
    logging->parent = this;
    path_options->parent = this;
    static_uni->parent = this;

    yang_name = "tunnel-head"; yang_parent_name = "tunnel-heads"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::~TunnelHead()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::has_data() const
{
    return tunnel_id.is_set
	|| enable.is_set
	|| restore_lsp_shutdown.is_set
	|| current_lsp_shutdown.is_set
	|| path_selection_metric.is_set
	|| payload.is_set
	|| standby_lsp_shutdown.is_set
	|| shutdown.is_set
	|| path_protection_attribute_set_profile.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| (signalled_bandwidth !=  nullptr && signalled_bandwidth->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (protection_switching !=  nullptr && protection_switching->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (path_options !=  nullptr && path_options->has_data())
	|| (static_uni !=  nullptr && static_uni->has_data());
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(restore_lsp_shutdown.yfilter)
	|| ydk::is_set(current_lsp_shutdown.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| ydk::is_set(standby_lsp_shutdown.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(path_protection_attribute_set_profile.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| (signalled_bandwidth !=  nullptr && signalled_bandwidth->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (protection_switching !=  nullptr && protection_switching->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (path_options !=  nullptr && path_options->has_operation())
	|| (static_uni !=  nullptr && static_uni->has_operation());
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/tunnel-heads/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-head" <<"[tunnel-id='" <<tunnel_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (restore_lsp_shutdown.is_set || is_set(restore_lsp_shutdown.yfilter)) leaf_name_data.push_back(restore_lsp_shutdown.get_name_leafdata());
    if (current_lsp_shutdown.is_set || is_set(current_lsp_shutdown.yfilter)) leaf_name_data.push_back(current_lsp_shutdown.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());
    if (standby_lsp_shutdown.is_set || is_set(standby_lsp_shutdown.yfilter)) leaf_name_data.push_back(standby_lsp_shutdown.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (path_protection_attribute_set_profile.is_set || is_set(path_protection_attribute_set_profile.yfilter)) leaf_name_data.push_back(path_protection_attribute_set_profile.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-bandwidth")
    {
        if(signalled_bandwidth == nullptr)
        {
            signalled_bandwidth = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth>();
        }
        return signalled_bandwidth;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "protection-switching")
    {
        if(protection_switching == nullptr)
        {
            protection_switching = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching>();
        }
        return protection_switching;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions>();
        }
        return path_options;
    }

    if(child_yang_name == "static-uni")
    {
        if(static_uni == nullptr)
        {
            static_uni = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni>();
        }
        return static_uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(signalled_bandwidth != nullptr)
    {
        children["signalled-bandwidth"] = signalled_bandwidth;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(protection_switching != nullptr)
    {
        children["protection-switching"] = protection_switching;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    if(static_uni != nullptr)
    {
        children["static-uni"] = static_uni;
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restore-lsp-shutdown")
    {
        restore_lsp_shutdown = value;
        restore_lsp_shutdown.value_namespace = name_space;
        restore_lsp_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-lsp-shutdown")
    {
        current_lsp_shutdown = value;
        current_lsp_shutdown.value_namespace = name_space;
        current_lsp_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-lsp-shutdown")
    {
        standby_lsp_shutdown = value;
        standby_lsp_shutdown.value_namespace = name_space;
        standby_lsp_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-attribute-set-profile")
    {
        path_protection_attribute_set_profile = value;
        path_protection_attribute_set_profile.value_namespace = name_space;
        path_protection_attribute_set_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "restore-lsp-shutdown")
    {
        restore_lsp_shutdown.yfilter = yfilter;
    }
    if(value_path == "current-lsp-shutdown")
    {
        current_lsp_shutdown.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
    if(value_path == "standby-lsp-shutdown")
    {
        standby_lsp_shutdown.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "path-protection-attribute-set-profile")
    {
        path_protection_attribute_set_profile.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-bandwidth" || name == "destination" || name == "protection-switching" || name == "logging" || name == "path-options" || name == "static-uni" || name == "tunnel-id" || name == "enable" || name == "restore-lsp-shutdown" || name == "current-lsp-shutdown" || name == "path-selection-metric" || name == "payload" || name == "standby-lsp-shutdown" || name == "shutdown" || name == "path-protection-attribute-set-profile" || name == "record-route" || name == "signalled-name")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::SignalledBandwidth()
    :
    signalled_bandwidth_type{YType::enumeration, "signalled-bandwidth-type"},
    bitrate{YType::int32, "bitrate"},
    od_uflex_framing_type{YType::enumeration, "od-uflex-framing-type"}
{

    yang_name = "signalled-bandwidth"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::~SignalledBandwidth()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_data() const
{
    return signalled_bandwidth_type.is_set
	|| bitrate.is_set
	|| od_uflex_framing_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signalled_bandwidth_type.yfilter)
	|| ydk::is_set(bitrate.yfilter)
	|| ydk::is_set(od_uflex_framing_type.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signalled_bandwidth_type.is_set || is_set(signalled_bandwidth_type.yfilter)) leaf_name_data.push_back(signalled_bandwidth_type.get_name_leafdata());
    if (bitrate.is_set || is_set(bitrate.yfilter)) leaf_name_data.push_back(bitrate.get_name_leafdata());
    if (od_uflex_framing_type.is_set || is_set(od_uflex_framing_type.yfilter)) leaf_name_data.push_back(od_uflex_framing_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signalled-bandwidth-type")
    {
        signalled_bandwidth_type = value;
        signalled_bandwidth_type.value_namespace = name_space;
        signalled_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitrate")
    {
        bitrate = value;
        bitrate.value_namespace = name_space;
        bitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "od-uflex-framing-type")
    {
        od_uflex_framing_type = value;
        od_uflex_framing_type.value_namespace = name_space;
        od_uflex_framing_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signalled-bandwidth-type")
    {
        signalled_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "bitrate")
    {
        bitrate.yfilter = yfilter;
    }
    if(value_path == "od-uflex-framing-type")
    {
        od_uflex_framing_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-bandwidth-type" || name == "bitrate" || name == "od-uflex-framing-type")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::Destination()
    :
    destination{YType::str, "destination"},
    destination_type{YType::enumeration, "destination-type"},
    interface_if_index{YType::int32, "interface-if-index"}
{

    yang_name = "destination"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::~Destination()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_data() const
{
    return destination.is_set
	|| destination_type.is_set
	|| interface_if_index.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(destination_type.yfilter)
	|| ydk::is_set(interface_if_index.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.yfilter)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (interface_if_index.is_set || is_set(interface_if_index.yfilter)) leaf_name_data.push_back(interface_if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-type")
    {
        destination_type = value;
        destination_type.value_namespace = name_space;
        destination_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-if-index")
    {
        interface_if_index = value;
        interface_if_index.value_namespace = name_space;
        interface_if_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "destination-type")
    {
        destination_type.yfilter = yfilter;
    }
    if(value_path == "interface-if-index")
    {
        interface_if_index.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "destination-type" || name == "interface-if-index")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::ProtectionSwitching()
    :
    lockout{YType::enumeration, "lockout"}
{

    yang_name = "protection-switching"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::~ProtectionSwitching()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_data() const
{
    return lockout.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lockout.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-switching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lockout")
        return true;
    return false;
}


}
}

