
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_3.hpp"
#include "Cisco_IOS_XE_native_4.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Flow::Record::Collect::Ipv6::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{

    yang_name = "payload"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv6::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Collect::Ipv6::Section::Payload::has_data() const
{
    return size.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Section::Payload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv6::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv6::Section::Payload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Section::Payload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv6::Section::Payload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv6::Section::Payload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv6::Source::Source()
    :
    address{YType::empty, "address"}
    	,
    mask(nullptr) // presence node
	,prefix(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv6::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Ipv6::Source::has_data() const
{
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Collect::Ipv6::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Collect::Ipv6::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv6::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Collect::Ipv6::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Collect::Ipv6::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Collect::Ipv6::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv6::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv6::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv6::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv6::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Collect::Ipv6::Source::Mask::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Source::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv6::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv6::Source::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Source::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv6::Source::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv6::Source::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Collect::Ipv6::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Ipv6::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Collect::Ipv6::Source::Prefix::has_data() const
{
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Collect::Ipv6::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Collect::Ipv6::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Ipv6::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Ipv6::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Ipv6::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Ipv6::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Ipv6::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Ipv6::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Collect::Metadata::Metadata()
    :
    clock_rate{YType::empty, "clock-rate"},
    global_session_id{YType::empty, "global-session-id"},
    multi_party_session_id{YType::empty, "multi-party-session-id"}
{

    yang_name = "metadata"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Metadata::~Metadata()
{
}

bool Native::Flow::Record::Collect::Metadata::has_data() const
{
    return clock_rate.is_set
	|| global_session_id.is_set
	|| multi_party_session_id.is_set;
}

bool Native::Flow::Record::Collect::Metadata::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_rate.yfilter)
	|| ydk::is_set(global_session_id.yfilter)
	|| ydk::is_set(multi_party_session_id.yfilter);
}

std::string Native::Flow::Record::Collect::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Metadata::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_rate.is_set || is_set(clock_rate.yfilter)) leaf_name_data.push_back(clock_rate.get_name_leafdata());
    if (global_session_id.is_set || is_set(global_session_id.yfilter)) leaf_name_data.push_back(global_session_id.get_name_leafdata());
    if (multi_party_session_id.is_set || is_set(multi_party_session_id.yfilter)) leaf_name_data.push_back(multi_party_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Metadata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-rate")
    {
        clock_rate = value;
        clock_rate.value_namespace = name_space;
        clock_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-session-id")
    {
        global_session_id = value;
        global_session_id.value_namespace = name_space;
        global_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id = value;
        multi_party_session_id.value_namespace = name_space;
        multi_party_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Metadata::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-rate")
    {
        clock_rate.yfilter = yfilter;
    }
    if(value_path == "global-session-id")
    {
        global_session_id.yfilter = yfilter;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Metadata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate" || name == "global-session-id" || name == "multi-party-session-id")
        return true;
    return false;
}

Native::Flow::Record::Collect::Monitor::Monitor()
    :
    event{YType::empty, "event"}
{

    yang_name = "monitor"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Monitor::~Monitor()
{
}

bool Native::Flow::Record::Collect::Monitor::has_data() const
{
    return event.is_set;
}

bool Native::Flow::Record::Collect::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter);
}

std::string Native::Flow::Record::Collect::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Flow::Record::Collect::Mpls::Mpls()
    :
    label(std::make_shared<Native::Flow::Record::Collect::Mpls::Label>())
{
    label->parent = this;

    yang_name = "mpls"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Mpls::~Mpls()
{
}

bool Native::Flow::Record::Collect::Mpls::has_data() const
{
    return (label !=  nullptr && label->has_data());
}

bool Native::Flow::Record::Collect::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation());
}

std::string Native::Flow::Record::Collect::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Collect::Mpls::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(label != nullptr)
    {
        children["label"] = label;
    }

    return children;
}

void Native::Flow::Record::Collect::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Flow::Record::Collect::Mpls::Label::Label()
    :
    one(std::make_shared<Native::Flow::Record::Collect::Mpls::Label::One>())
	,two(std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Two>())
	,three(std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Three>())
	,four(std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Four>())
	,five(std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Five>())
	,six(std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Six>())
{
    one->parent = this;
    two->parent = this;
    three->parent = this;
    four->parent = this;
    five->parent = this;
    six->parent = this;

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Mpls::Label::~Label()
{
}

bool Native::Flow::Record::Collect::Mpls::Label::has_data() const
{
    return (one !=  nullptr && one->has_data())
	|| (two !=  nullptr && two->has_data())
	|| (three !=  nullptr && three->has_data())
	|| (four !=  nullptr && four->has_data())
	|| (five !=  nullptr && five->has_data())
	|| (six !=  nullptr && six->has_data());
}

bool Native::Flow::Record::Collect::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (two !=  nullptr && two->has_operation())
	|| (three !=  nullptr && three->has_operation())
	|| (four !=  nullptr && four->has_operation())
	|| (five !=  nullptr && five->has_operation())
	|| (six !=  nullptr && six->has_operation());
}

std::string Native::Flow::Record::Collect::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Native::Flow::Record::Collect::Mpls::Label::One>();
        }
        return one;
    }

    if(child_yang_name == "two")
    {
        if(two == nullptr)
        {
            two = std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Two>();
        }
        return two;
    }

    if(child_yang_name == "three")
    {
        if(three == nullptr)
        {
            three = std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Three>();
        }
        return three;
    }

    if(child_yang_name == "four")
    {
        if(four == nullptr)
        {
            four = std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Four>();
        }
        return four;
    }

    if(child_yang_name == "five")
    {
        if(five == nullptr)
        {
            five = std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Five>();
        }
        return five;
    }

    if(child_yang_name == "six")
    {
        if(six == nullptr)
        {
            six = std::make_shared<Native::Flow::Record::Collect::Mpls::Label::Six>();
        }
        return six;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(one != nullptr)
    {
        children["one"] = one;
    }

    if(two != nullptr)
    {
        children["two"] = two;
    }

    if(three != nullptr)
    {
        children["three"] = three;
    }

    if(four != nullptr)
    {
        children["four"] = four;
    }

    if(five != nullptr)
    {
        children["five"] = five;
    }

    if(six != nullptr)
    {
        children["six"] = six;
    }

    return children;
}

void Native::Flow::Record::Collect::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "two" || name == "three" || name == "four" || name == "five" || name == "six")
        return true;
    return false;
}

Native::Flow::Record::Collect::Mpls::Label::One::One()
    :
    details{YType::empty, "details"},
    exp{YType::empty, "exp"},
    ttl{YType::empty, "ttl"},
    type{YType::empty, "type"}
{

    yang_name = "one"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Mpls::Label::One::~One()
{
}

bool Native::Flow::Record::Collect::Mpls::Label::One::has_data() const
{
    return details.is_set
	|| exp.is_set
	|| ttl.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Collect::Mpls::Label::One::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Collect::Mpls::Label::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Mpls::Label::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());
    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Mpls::Label::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Mpls::Label::One::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Mpls::Label::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Mpls::Label::One::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Mpls::Label::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "exp" || name == "ttl" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Collect::Mpls::Label::Two::Two()
    :
    details{YType::empty, "details"}
{

    yang_name = "two"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Mpls::Label::Two::~Two()
{
}

bool Native::Flow::Record::Collect::Mpls::Label::Two::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Collect::Mpls::Label::Two::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Collect::Mpls::Label::Two::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Mpls::Label::Two::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Mpls::Label::Two::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Mpls::Label::Two::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Mpls::Label::Two::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Mpls::Label::Two::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Mpls::Label::Two::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Collect::Mpls::Label::Three::Three()
    :
    details{YType::empty, "details"}
{

    yang_name = "three"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Mpls::Label::Three::~Three()
{
}

bool Native::Flow::Record::Collect::Mpls::Label::Three::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Collect::Mpls::Label::Three::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Collect::Mpls::Label::Three::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Mpls::Label::Three::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Mpls::Label::Three::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Mpls::Label::Three::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Mpls::Label::Three::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Mpls::Label::Three::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Mpls::Label::Three::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Collect::Mpls::Label::Four::Four()
    :
    details{YType::empty, "details"}
{

    yang_name = "four"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Mpls::Label::Four::~Four()
{
}

bool Native::Flow::Record::Collect::Mpls::Label::Four::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Collect::Mpls::Label::Four::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Collect::Mpls::Label::Four::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Mpls::Label::Four::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Mpls::Label::Four::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Mpls::Label::Four::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Mpls::Label::Four::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Mpls::Label::Four::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Mpls::Label::Four::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Collect::Mpls::Label::Five::Five()
    :
    details{YType::empty, "details"}
{

    yang_name = "five"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Mpls::Label::Five::~Five()
{
}

bool Native::Flow::Record::Collect::Mpls::Label::Five::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Collect::Mpls::Label::Five::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Collect::Mpls::Label::Five::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "five";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Mpls::Label::Five::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Mpls::Label::Five::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Mpls::Label::Five::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Mpls::Label::Five::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Mpls::Label::Five::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Mpls::Label::Five::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Collect::Mpls::Label::Six::Six()
    :
    details{YType::empty, "details"}
{

    yang_name = "six"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Mpls::Label::Six::~Six()
{
}

bool Native::Flow::Record::Collect::Mpls::Label::Six::has_data() const
{
    return details.is_set;
}

bool Native::Flow::Record::Collect::Mpls::Label::Six::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Collect::Mpls::Label::Six::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "six";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Mpls::Label::Six::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Mpls::Label::Six::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Mpls::Label::Six::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Mpls::Label::Six::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Mpls::Label::Six::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Mpls::Label::Six::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Collect::Network::Network()
    :
    delay(std::make_shared<Native::Flow::Record::Collect::Network::Delay>())
{
    delay->parent = this;

    yang_name = "network"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Network::~Network()
{
}

bool Native::Flow::Record::Collect::Network::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Flow::Record::Collect::Network::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Flow::Record::Collect::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Collect::Network::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Flow::Record::Collect::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Flow::Record::Collect::Network::Delay::Delay()
    :
    sample{YType::empty, "sample"},
    sum{YType::empty, "sum"}
{

    yang_name = "delay"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Network::Delay::~Delay()
{
}

bool Native::Flow::Record::Collect::Network::Delay::has_data() const
{
    return sample.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Network::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Network::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Network::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample.is_set || is_set(sample.yfilter)) leaf_name_data.push_back(sample.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Network::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Network::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Network::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample")
    {
        sample = value;
        sample.value_namespace = name_space;
        sample.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Network::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample")
    {
        sample.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Network::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Pfr()
    :
    label(std::make_shared<Native::Flow::Record::Collect::Pfr::Label>())
	,one_way_delay(std::make_shared<Native::Flow::Record::Collect::Pfr::OneWayDelay>())
	,service(std::make_shared<Native::Flow::Record::Collect::Pfr::Service>())
	,site(std::make_shared<Native::Flow::Record::Collect::Pfr::Site>())
{
    label->parent = this;
    one_way_delay->parent = this;
    service->parent = this;
    site->parent = this;

    yang_name = "pfr"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::~Pfr()
{
}

bool Native::Flow::Record::Collect::Pfr::has_data() const
{
    return (label !=  nullptr && label->has_data())
	|| (one_way_delay !=  nullptr && one_way_delay->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (site !=  nullptr && site->has_data());
}

bool Native::Flow::Record::Collect::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation())
	|| (one_way_delay !=  nullptr && one_way_delay->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (site !=  nullptr && site->has_operation());
}

std::string Native::Flow::Record::Collect::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Collect::Pfr::Label>();
        }
        return label;
    }

    if(child_yang_name == "one-way-delay")
    {
        if(one_way_delay == nullptr)
        {
            one_way_delay = std::make_shared<Native::Flow::Record::Collect::Pfr::OneWayDelay>();
        }
        return one_way_delay;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Flow::Record::Collect::Pfr::Service>();
        }
        return service;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::Flow::Record::Collect::Pfr::Site>();
        }
        return site;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(one_way_delay != nullptr)
    {
        children["one-way-delay"] = one_way_delay;
    }

    if(service != nullptr)
    {
        children["service"] = service;
    }

    if(site != nullptr)
    {
        children["site"] = site;
    }

    return children;
}

void Native::Flow::Record::Collect::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "one-way-delay" || name == "service" || name == "site")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Label::Label()
    :
    identifier{YType::empty, "identifier"}
{

    yang_name = "label"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Label::~Label()
{
}

bool Native::Flow::Record::Collect::Pfr::Label::has_data() const
{
    return identifier.is_set;
}

bool Native::Flow::Record::Collect::Pfr::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter);
}

std::string Native::Flow::Record::Collect::Pfr::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Pfr::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::OneWayDelay::OneWayDelay()
    :
    samples{YType::empty, "samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "one-way-delay"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::OneWayDelay::~OneWayDelay()
{
}

bool Native::Flow::Record::Collect::Pfr::OneWayDelay::has_data() const
{
    return samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Pfr::OneWayDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Pfr::OneWayDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-way-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::OneWayDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (samples.is_set || is_set(samples.yfilter)) leaf_name_data.push_back(samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::OneWayDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::OneWayDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Pfr::OneWayDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "samples")
    {
        samples = value;
        samples.value_namespace = name_space;
        samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::OneWayDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "samples")
    {
        samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::OneWayDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Service::Service()
    :
    provider{YType::empty, "provider"},
    tag{YType::empty, "tag"},
    identifier{YType::empty, "identifier"}
{

    yang_name = "service"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Service::~Service()
{
}

bool Native::Flow::Record::Collect::Pfr::Service::has_data() const
{
    return provider.is_set
	|| tag.is_set
	|| identifier.is_set;
}

bool Native::Flow::Record::Collect::Pfr::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(provider.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(identifier.yfilter);
}

std::string Native::Flow::Record::Collect::Pfr::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (provider.is_set || is_set(provider.yfilter)) leaf_name_data.push_back(provider.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Pfr::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "provider")
    {
        provider = value;
        provider.value_namespace = name_space;
        provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "provider")
    {
        provider.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provider" || name == "tag" || name == "identifier")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Site()
    :
    destination(std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Destination>())
	,source(std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "site"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::~Site()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Collect::Pfr::Site::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Collect::Pfr::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Pfr::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Pfr::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Destination::Destination()
    :
    id(std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Destination::Id>())
	,prefix(std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix>())
{
    id->parent = this;
    prefix->parent = this;

    yang_name = "destination"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Collect::Pfr::Site::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Destination::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Pfr::Site::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "prefix")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Destination::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "id"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::Destination::Id::~Id()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Id::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Collect::Pfr::Site::Destination::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::Destination::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::Destination::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::Destination::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::Destination::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::Site::Destination::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
    	,
    mask(std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::has_data() const
{
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "mask"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Source::Source()
    :
    id(std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Source::Id>())
	,prefix(std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Source::Prefix>())
{
    id->parent = this;
    prefix->parent = this;

    yang_name = "source"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Collect::Pfr::Site::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Source::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Pfr::Site::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "prefix")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Source::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::Source::Id::~Id()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Id::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Collect::Pfr::Site::Source::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::Source::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::Source::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::Source::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::Source::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::Site::Source::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
    	,
    mask(std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::has_data() const
{
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mask != nullptr)
    {
        children["mask"] = mask;
    }

    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "mask"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::has_data() const
{
    return ipv4.is_set;
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Collect::Policy::Policy()
    :
    performance_monitor(std::make_shared<Native::Flow::Record::Collect::Policy::PerformanceMonitor>())
	,qos(std::make_shared<Native::Flow::Record::Collect::Policy::Qos>())
{
    performance_monitor->parent = this;
    qos->parent = this;

    yang_name = "policy"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Policy::~Policy()
{
}

bool Native::Flow::Record::Collect::Policy::has_data() const
{
    return (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Flow::Record::Collect::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Flow::Record::Collect::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Flow::Record::Collect::Policy::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Flow::Record::Collect::Policy::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Flow::Record::Collect::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "performance-monitor" || name == "qos")
        return true;
    return false;
}

Native::Flow::Record::Collect::Policy::PerformanceMonitor::PerformanceMonitor()
    :
    classification(std::make_shared<Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification>())
{
    classification->parent = this;

    yang_name = "performance-monitor"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Policy::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Flow::Record::Collect::Policy::PerformanceMonitor::has_data() const
{
    return (classification !=  nullptr && classification->has_data());
}

bool Native::Flow::Record::Collect::Policy::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (classification !=  nullptr && classification->has_operation());
}

std::string Native::Flow::Record::Collect::Policy::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Policy::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Policy::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification>();
        }
        return classification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Policy::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(classification != nullptr)
    {
        children["classification"] = classification;
    }

    return children;
}

void Native::Flow::Record::Collect::Policy::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Policy::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Policy::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classification")
        return true;
    return false;
}

Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "classification"; yang_parent_name = "performance-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::~Classification()
{
}

bool Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::has_data() const
{
    return hierarchy.is_set;
}

bool Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

Native::Flow::Record::Collect::Policy::Qos::Qos()
    :
    classification(std::make_shared<Native::Flow::Record::Collect::Policy::Qos::Classification>())
	,queue(std::make_shared<Native::Flow::Record::Collect::Policy::Qos::Queue>())
{
    classification->parent = this;
    queue->parent = this;

    yang_name = "qos"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Policy::Qos::~Qos()
{
}

bool Native::Flow::Record::Collect::Policy::Qos::has_data() const
{
    return (classification !=  nullptr && classification->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Flow::Record::Collect::Policy::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (classification !=  nullptr && classification->has_operation())
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Flow::Record::Collect::Policy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Policy::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Policy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Collect::Policy::Qos::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Flow::Record::Collect::Policy::Qos::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Policy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(classification != nullptr)
    {
        children["classification"] = classification;
    }

    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Flow::Record::Collect::Policy::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Policy::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Policy::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classification" || name == "queue")
        return true;
    return false;
}

Native::Flow::Record::Collect::Policy::Qos::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "classification"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Policy::Qos::Classification::~Classification()
{
}

bool Native::Flow::Record::Collect::Policy::Qos::Classification::has_data() const
{
    return hierarchy.is_set;
}

bool Native::Flow::Record::Collect::Policy::Qos::Classification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Native::Flow::Record::Collect::Policy::Qos::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Policy::Qos::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Policy::Qos::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Policy::Qos::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Policy::Qos::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Policy::Qos::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Policy::Qos::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

Native::Flow::Record::Collect::Policy::Qos::Queue::Queue()
    :
    drops{YType::empty, "drops"},
    index_{YType::empty, "index"}
{

    yang_name = "queue"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Policy::Qos::Queue::~Queue()
{
}

bool Native::Flow::Record::Collect::Policy::Qos::Queue::has_data() const
{
    return drops.is_set
	|| index_.is_set;
}

bool Native::Flow::Record::Collect::Policy::Qos::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Native::Flow::Record::Collect::Policy::Qos::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Policy::Qos::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Policy::Qos::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Policy::Qos::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Policy::Qos::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Policy::Qos::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Policy::Qos::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "index")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Routing()
    :
    is_multicast{YType::empty, "is-multicast"}
    	,
    destination(std::make_shared<Native::Flow::Record::Collect::Routing::Destination>())
	,forwarding_status(nullptr) // presence node
	,next_hop(std::make_shared<Native::Flow::Record::Collect::Routing::NextHop>())
	,pw(std::make_shared<Native::Flow::Record::Collect::Routing::Pw>())
	,source(std::make_shared<Native::Flow::Record::Collect::Routing::Source>())
	,vrf(std::make_shared<Native::Flow::Record::Collect::Routing::Vrf>())
{
    destination->parent = this;
    next_hop->parent = this;
    pw->parent = this;
    source->parent = this;
    vrf->parent = this;

    yang_name = "routing"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::~Routing()
{
}

bool Native::Flow::Record::Collect::Routing::has_data() const
{
    return is_multicast.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (forwarding_status !=  nullptr && forwarding_status->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Flow::Record::Collect::Routing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_multicast.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (forwarding_status !=  nullptr && forwarding_status->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Flow::Record::Collect::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_multicast.is_set || is_set(is_multicast.yfilter)) leaf_name_data.push_back(is_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Routing::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "forwarding-status")
    {
        if(forwarding_status == nullptr)
        {
            forwarding_status = std::make_shared<Native::Flow::Record::Collect::Routing::ForwardingStatus>();
        }
        return forwarding_status;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Flow::Record::Collect::Routing::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<Native::Flow::Record::Collect::Routing::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Collect::Routing::Source>();
        }
        return source;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Flow::Record::Collect::Routing::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(forwarding_status != nullptr)
    {
        children["forwarding-status"] = forwarding_status;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Flow::Record::Collect::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-multicast")
    {
        is_multicast = value;
        is_multicast.value_namespace = name_space;
        is_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-multicast")
    {
        is_multicast.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "forwarding-status" || name == "next-hop" || name == "pw" || name == "source" || name == "vrf" || name == "is-multicast")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Destination::Destination()
    :
    traffic_index{YType::empty, "traffic-index"}
    	,
    as(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Routing::Destination::has_data() const
{
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Collect::Routing::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Collect::Routing::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Collect::Routing::Destination::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(as != nullptr)
    {
        children["as"] = as;
    }

    return children;
}

void Native::Flow::Record::Collect::Routing::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Destination::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
    	,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Destination::As::~As()
{
}

bool Native::Flow::Record::Collect::Routing::Destination::As::has_data() const
{
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Collect::Routing::Destination::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Collect::Routing::Destination::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Destination::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Destination::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Collect::Routing::Destination::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Destination::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Flow::Record::Collect::Routing::Destination::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::Destination::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::Destination::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Destination::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Destination::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Collect::Routing::Destination::As::Peer::has_data() const
{
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Collect::Routing::Destination::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Collect::Routing::Destination::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Destination::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Destination::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Destination::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Routing::Destination::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::Destination::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::Destination::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::ForwardingStatus::ForwardingStatus()
    :
    reason{YType::empty, "reason"}
{

    yang_name = "forwarding-status"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::ForwardingStatus::~ForwardingStatus()
{
}

bool Native::Flow::Record::Collect::Routing::ForwardingStatus::has_data() const
{
    return reason.is_set;
}

bool Native::Flow::Record::Collect::Routing::ForwardingStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Native::Flow::Record::Collect::Routing::ForwardingStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::ForwardingStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::ForwardingStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::ForwardingStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Routing::ForwardingStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::ForwardingStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::ForwardingStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::NextHop::NextHop()
    :
    address(std::make_shared<Native::Flow::Record::Collect::Routing::NextHop::Address>())
{
    address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::NextHop::~NextHop()
{
}

bool Native::Flow::Record::Collect::Routing::NextHop::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Collect::Routing::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Collect::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Collect::Routing::NextHop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Flow::Record::Collect::Routing::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Routing::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Routing::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::NextHop::Address::Address()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::NextHop::Address::~Address()
{
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Collect::Routing::NextHop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::NextHop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::NextHop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::NextHop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Record::Collect::Routing::NextHop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Routing::NextHop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::Ipv4()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::has_data() const
{
    return bgp.is_set;
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::Ipv6()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::has_data() const
{
    return bgp.is_set;
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Pw::Pw()
    :
    destination(std::make_shared<Native::Flow::Record::Collect::Routing::Pw::Destination>())
{
    destination->parent = this;

    yang_name = "pw"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Pw::~Pw()
{
}

bool Native::Flow::Record::Collect::Routing::Pw::has_data() const
{
    return (destination !=  nullptr && destination->has_data());
}

bool Native::Flow::Record::Collect::Routing::Pw::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Flow::Record::Collect::Routing::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Collect::Routing::Pw::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Flow::Record::Collect::Routing::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Routing::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Routing::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Pw::Destination::Destination()
    :
    address{YType::empty, "address"}
{

    yang_name = "destination"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Pw::Destination::~Destination()
{
}

bool Native::Flow::Record::Collect::Routing::Pw::Destination::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Collect::Routing::Pw::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Collect::Routing::Pw::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Pw::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Pw::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Pw::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Routing::Pw::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::Pw::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::Pw::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Source::Source()
    :
    traffic_index{YType::empty, "traffic-index"}
    	,
    as(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Source::~Source()
{
}

bool Native::Flow::Record::Collect::Routing::Source::has_data() const
{
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Collect::Routing::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Collect::Routing::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Collect::Routing::Source::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(as != nullptr)
    {
        children["as"] = as;
    }

    return children;
}

void Native::Flow::Record::Collect::Routing::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Source::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
    	,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Source::As::~As()
{
}

bool Native::Flow::Record::Collect::Routing::Source::As::has_data() const
{
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Collect::Routing::Source::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Collect::Routing::Source::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Source::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Source::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Collect::Routing::Source::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Source::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Flow::Record::Collect::Routing::Source::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::Source::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::Source::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Source::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Source::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Collect::Routing::Source::As::Peer::has_data() const
{
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Collect::Routing::Source::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Collect::Routing::Source::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Source::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Source::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Source::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Routing::Source::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::Source::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::Source::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Collect::Routing::Vrf::Vrf()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "vrf"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Routing::Vrf::~Vrf()
{
}

bool Native::Flow::Record::Collect::Routing::Vrf::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Collect::Routing::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Collect::Routing::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Routing::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Routing::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Routing::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Routing::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Routing::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Routing::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Collect::Services::Services()
    :
    waas(std::make_shared<Native::Flow::Record::Collect::Services::Waas>())
{
    waas->parent = this;

    yang_name = "services"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Services::~Services()
{
}

bool Native::Flow::Record::Collect::Services::has_data() const
{
    return (waas !=  nullptr && waas->has_data());
}

bool Native::Flow::Record::Collect::Services::has_operation() const
{
    return is_set(yfilter)
	|| (waas !=  nullptr && waas->has_operation());
}

std::string Native::Flow::Record::Collect::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        if(waas == nullptr)
        {
            waas = std::make_shared<Native::Flow::Record::Collect::Services::Waas>();
        }
        return waas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(waas != nullptr)
    {
        children["waas"] = waas;
    }

    return children;
}

void Native::Flow::Record::Collect::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "waas")
        return true;
    return false;
}

Native::Flow::Record::Collect::Services::Waas::Waas()
    :
    passthrough_reason{YType::empty, "passthrough-reason"}
    	,
    segment(nullptr) // presence node
{

    yang_name = "waas"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Services::Waas::~Waas()
{
}

bool Native::Flow::Record::Collect::Services::Waas::has_data() const
{
    return passthrough_reason.is_set
	|| (segment !=  nullptr && segment->has_data());
}

bool Native::Flow::Record::Collect::Services::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passthrough_reason.yfilter)
	|| (segment !=  nullptr && segment->has_operation());
}

std::string Native::Flow::Record::Collect::Services::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Services::Waas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passthrough_reason.is_set || is_set(passthrough_reason.yfilter)) leaf_name_data.push_back(passthrough_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Services::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<Native::Flow::Record::Collect::Services::Waas::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Services::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void Native::Flow::Record::Collect::Services::Waas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason = value;
        passthrough_reason.value_namespace = name_space;
        passthrough_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Services::Waas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Services::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "passthrough-reason")
        return true;
    return false;
}

Native::Flow::Record::Collect::Services::Waas::Segment::Segment()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "segment"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Services::Waas::Segment::~Segment()
{
}

bool Native::Flow::Record::Collect::Services::Waas::Segment::has_data() const
{
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Collect::Services::Waas::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Collect::Services::Waas::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Services::Waas::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Services::Waas::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Services::Waas::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Services::Waas::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Services::Waas::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Services::Waas::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Collect::Timestamp::Timestamp()
    :
    interval{YType::empty, "interval"}
    	,
    absolute(std::make_shared<Native::Flow::Record::Collect::Timestamp::Absolute>())
	,sys_uptime(std::make_shared<Native::Flow::Record::Collect::Timestamp::SysUptime>())
{
    absolute->parent = this;
    sys_uptime->parent = this;

    yang_name = "timestamp"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Timestamp::~Timestamp()
{
}

bool Native::Flow::Record::Collect::Timestamp::has_data() const
{
    return interval.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (sys_uptime !=  nullptr && sys_uptime->has_data());
}

bool Native::Flow::Record::Collect::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (sys_uptime !=  nullptr && sys_uptime->has_operation());
}

std::string Native::Flow::Record::Collect::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::Flow::Record::Collect::Timestamp::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "sys-uptime")
    {
        if(sys_uptime == nullptr)
        {
            sys_uptime = std::make_shared<Native::Flow::Record::Collect::Timestamp::SysUptime>();
        }
        return sys_uptime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(sys_uptime != nullptr)
    {
        children["sys-uptime"] = sys_uptime;
    }

    return children;
}

void Native::Flow::Record::Collect::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "sys-uptime" || name == "interval")
        return true;
    return false;
}

Native::Flow::Record::Collect::Timestamp::Absolute::Absolute()
    :
    first{YType::empty, "first"},
    last{YType::empty, "last"}
    	,
    monitoring_interval(std::make_shared<Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval>())
{
    monitoring_interval->parent = this;

    yang_name = "absolute"; yang_parent_name = "timestamp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Timestamp::Absolute::~Absolute()
{
}

bool Native::Flow::Record::Collect::Timestamp::Absolute::has_data() const
{
    return first.is_set
	|| last.is_set
	|| (monitoring_interval !=  nullptr && monitoring_interval->has_data());
}

bool Native::Flow::Record::Collect::Timestamp::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first.yfilter)
	|| ydk::is_set(last.yfilter)
	|| (monitoring_interval !=  nullptr && monitoring_interval->has_operation());
}

std::string Native::Flow::Record::Collect::Timestamp::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Timestamp::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.yfilter)) leaf_name_data.push_back(first.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Timestamp::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring-interval")
    {
        if(monitoring_interval == nullptr)
        {
            monitoring_interval = std::make_shared<Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval>();
        }
        return monitoring_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Timestamp::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(monitoring_interval != nullptr)
    {
        children["monitoring-interval"] = monitoring_interval;
    }

    return children;
}

void Native::Flow::Record::Collect::Timestamp::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first")
    {
        first = value;
        first.value_namespace = name_space;
        first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Timestamp::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first")
    {
        first.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Timestamp::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring-interval" || name == "first" || name == "last")
        return true;
    return false;
}

Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::MonitoringInterval()
    :
    end{YType::empty, "end"},
    start{YType::empty, "start"}
{

    yang_name = "monitoring-interval"; yang_parent_name = "absolute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::~MonitoringInterval()
{
}

bool Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::has_data() const
{
    return end.is_set
	|| start.is_set;
}

bool Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(start.yfilter);
}

std::string Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end" || name == "start")
        return true;
    return false;
}

Native::Flow::Record::Collect::Timestamp::SysUptime::SysUptime()
    :
    first{YType::empty, "first"},
    last{YType::empty, "last"}
{

    yang_name = "sys-uptime"; yang_parent_name = "timestamp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Timestamp::SysUptime::~SysUptime()
{
}

bool Native::Flow::Record::Collect::Timestamp::SysUptime::has_data() const
{
    return first.is_set
	|| last.is_set;
}

bool Native::Flow::Record::Collect::Timestamp::SysUptime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Native::Flow::Record::Collect::Timestamp::SysUptime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-uptime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Timestamp::SysUptime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.yfilter)) leaf_name_data.push_back(first.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Timestamp::SysUptime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Timestamp::SysUptime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Timestamp::SysUptime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first")
    {
        first = value;
        first.value_namespace = name_space;
        first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Timestamp::SysUptime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first")
    {
        first.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Timestamp::SysUptime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first" || name == "last")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Transport()
    :
    destination_port{YType::empty, "destination-port"},
    source_port{YType::empty, "source-port"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Collect::Transport::Bytes>())
	,icmp(std::make_shared<Native::Flow::Record::Collect::Transport::Icmp>())
	,igmp(std::make_shared<Native::Flow::Record::Collect::Transport::Igmp>())
	,tcp(std::make_shared<Native::Flow::Record::Collect::Transport::Tcp>())
	,udp(std::make_shared<Native::Flow::Record::Collect::Transport::Udp>())
	,event(std::make_shared<Native::Flow::Record::Collect::Transport::Event>())
	,packets(std::make_shared<Native::Flow::Record::Collect::Transport::Packets>())
	,round_trip_time(nullptr) // presence node
	,rtp(std::make_shared<Native::Flow::Record::Collect::Transport::Rtp>())
{
    bytes->parent = this;
    icmp->parent = this;
    igmp->parent = this;
    tcp->parent = this;
    udp->parent = this;
    event->parent = this;
    packets->parent = this;
    rtp->parent = this;

    yang_name = "transport"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::~Transport()
{
}

bool Native::Flow::Record::Collect::Transport::has_data() const
{
    return destination_port.is_set
	|| source_port.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (packets !=  nullptr && packets->has_data())
	|| (round_trip_time !=  nullptr && round_trip_time->has_data())
	|| (rtp !=  nullptr && rtp->has_data());
}

bool Native::Flow::Record::Collect::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (packets !=  nullptr && packets->has_operation())
	|| (round_trip_time !=  nullptr && round_trip_time->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Collect::Transport::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Flow::Record::Collect::Transport::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Flow::Record::Collect::Transport::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Flow::Record::Collect::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Flow::Record::Collect::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Flow::Record::Collect::Transport::Event>();
        }
        return event;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Collect::Transport::Packets>();
        }
        return packets;
    }

    if(child_yang_name == "round-trip-time")
    {
        if(round_trip_time == nullptr)
        {
            round_trip_time = std::make_shared<Native::Flow::Record::Collect::Transport::RoundTripTime>();
        }
        return round_trip_time;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Flow::Record::Collect::Transport::Rtp>();
        }
        return rtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    if(round_trip_time != nullptr)
    {
        children["round-trip-time"] = round_trip_time;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "icmp" || name == "igmp" || name == "tcp" || name == "udp" || name == "event" || name == "packets" || name == "round-trip-time" || name == "rtp" || name == "destination-port" || name == "source-port")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Bytes::Bytes()
    :
    expected{YType::empty, "expected"},
    out_of_order{YType::empty, "out-of-order"}
    	,
    lost(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Collect::Transport::Bytes::has_data() const
{
    return expected.is_set
	|| out_of_order.is_set
	|| (lost !=  nullptr && lost->has_data());
}

bool Native::Flow::Record::Collect::Transport::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expected.yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| (lost !=  nullptr && lost->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expected.is_set || is_set(expected.yfilter)) leaf_name_data.push_back(expected.get_name_leafdata());
    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lost")
    {
        if(lost == nullptr)
        {
            lost = std::make_shared<Native::Flow::Record::Collect::Transport::Bytes::Lost>();
        }
        return lost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lost != nullptr)
    {
        children["lost"] = lost;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expected")
    {
        expected = value;
        expected.value_namespace = name_space;
        expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expected")
    {
        expected.yfilter = yfilter;
    }
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lost" || name == "expected" || name == "out-of-order")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Bytes::Lost::Lost()
    :
    rate{YType::empty, "rate"}
{

    yang_name = "lost"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Bytes::Lost::~Lost()
{
}

bool Native::Flow::Record::Collect::Transport::Bytes::Lost::has_data() const
{
    return rate.is_set;
}

bool Native::Flow::Record::Collect::Transport::Bytes::Lost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Bytes::Lost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Bytes::Lost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Bytes::Lost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Bytes::Lost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Bytes::Lost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Bytes::Lost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Bytes::Lost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Icmp::Icmp()
    :
    ipv4(std::make_shared<Native::Flow::Record::Collect::Transport::Icmp::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Collect::Transport::Icmp::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "icmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Icmp::~Icmp()
{
}

bool Native::Flow::Record::Collect::Transport::Icmp::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Collect::Transport::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Collect::Transport::Icmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Collect::Transport::Icmp::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Transport::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Transport::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Icmp::Ipv4::Ipv4()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv4"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Icmp::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Collect::Transport::Icmp::Ipv4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Collect::Transport::Icmp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Icmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Icmp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Icmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Icmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Icmp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Icmp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Icmp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Icmp::Ipv6::Ipv6()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv6"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Icmp::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Collect::Transport::Icmp::Ipv6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Collect::Transport::Icmp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Icmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Icmp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Icmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Icmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Icmp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Icmp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Icmp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Igmp::Igmp()
    :
    type{YType::empty, "type"}
{

    yang_name = "igmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Igmp::~Igmp()
{
}

bool Native::Flow::Record::Collect::Transport::Igmp::has_data() const
{
    return type.is_set;
}

bool Native::Flow::Record::Collect::Transport::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Tcp::Tcp()
    :
    acknowledgement_number{YType::empty, "acknowledgement-number"},
    destination_port{YType::empty, "destination-port"},
    header_length{YType::empty, "header-length"},
    maximum_segment_size{YType::empty, "maximum-segment-size"},
    sequence_number{YType::empty, "sequence-number"},
    source_port{YType::empty, "source-port"},
    urgent_pointer{YType::empty, "urgent-pointer"}
    	,
    flags(nullptr) // presence node
	,flow(std::make_shared<Native::Flow::Record::Collect::Transport::Tcp::Flow_>())
	,option(std::make_shared<Native::Flow::Record::Collect::Transport::Tcp::Option>())
	,window_size(nullptr) // presence node
{
    flow->parent = this;
    option->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Tcp::~Tcp()
{
}

bool Native::Flow::Record::Collect::Transport::Tcp::has_data() const
{
    return acknowledgement_number.is_set
	|| destination_port.is_set
	|| header_length.is_set
	|| maximum_segment_size.is_set
	|| sequence_number.is_set
	|| source_port.is_set
	|| urgent_pointer.is_set
	|| (flags !=  nullptr && flags->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (window_size !=  nullptr && window_size->has_data());
}

bool Native::Flow::Record::Collect::Transport::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement_number.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(header_length.yfilter)
	|| ydk::is_set(maximum_segment_size.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(urgent_pointer.yfilter)
	|| (flags !=  nullptr && flags->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (window_size !=  nullptr && window_size->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_number.is_set || is_set(acknowledgement_number.yfilter)) leaf_name_data.push_back(acknowledgement_number.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.yfilter)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (maximum_segment_size.is_set || is_set(maximum_segment_size.yfilter)) leaf_name_data.push_back(maximum_segment_size.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (urgent_pointer.is_set || is_set(urgent_pointer.yfilter)) leaf_name_data.push_back(urgent_pointer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Native::Flow::Record::Collect::Transport::Tcp::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Collect::Transport::Tcp::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Collect::Transport::Tcp::Option>();
        }
        return option;
    }

    if(child_yang_name == "window-size")
    {
        if(window_size == nullptr)
        {
            window_size = std::make_shared<Native::Flow::Record::Collect::Transport::Tcp::WindowSize>();
        }
        return window_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(window_size != nullptr)
    {
        children["window-size"] = window_size;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number = value;
        acknowledgement_number.value_namespace = name_space;
        acknowledgement_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-length")
    {
        header_length = value;
        header_length.value_namespace = name_space;
        header_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size = value;
        maximum_segment_size.value_namespace = name_space;
        maximum_segment_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer = value;
        urgent_pointer.value_namespace = name_space;
        urgent_pointer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "header-length")
    {
        header_length.yfilter = yfilter;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "flow" || name == "option" || name == "window-size" || name == "acknowledgement-number" || name == "destination-port" || name == "header-length" || name == "maximum-segment-size" || name == "sequence-number" || name == "source-port" || name == "urgent-pointer")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Tcp::Flags::Flags()
    :
    ack{YType::empty, "ack"},
    cwr{YType::empty, "cwr"},
    ece{YType::empty, "ece"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"}
{

    yang_name = "flags"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Tcp::Flags::~Flags()
{
}

bool Native::Flow::Record::Collect::Transport::Tcp::Flags::has_data() const
{
    return ack.is_set
	|| cwr.is_set
	|| ece.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set;
}

bool Native::Flow::Record::Collect::Transport::Tcp::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(cwr.yfilter)
	|| ydk::is_set(ece.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Tcp::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Tcp::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (cwr.is_set || is_set(cwr.yfilter)) leaf_name_data.push_back(cwr.get_name_leafdata());
    if (ece.is_set || is_set(ece.yfilter)) leaf_name_data.push_back(ece.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Tcp::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Tcp::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Tcp::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cwr")
    {
        cwr = value;
        cwr.value_namespace = name_space;
        cwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ece")
    {
        ece = value;
        ece.value_namespace = name_space;
        ece.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Tcp::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "cwr")
    {
        cwr.yfilter = yfilter;
    }
    if(value_path == "ece")
    {
        ece.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Tcp::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "cwr" || name == "ece" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Tcp::Flow_::Flow_()
    :
    count{YType::empty, "count"}
{

    yang_name = "flow"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Tcp::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Collect::Transport::Tcp::Flow_::has_data() const
{
    return count.is_set;
}

bool Native::Flow::Record::Collect::Transport::Tcp::Flow_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Tcp::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Tcp::Flow_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Tcp::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Tcp::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Tcp::Flow_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Tcp::Flow_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Tcp::Flow_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Tcp::Option::Option()
    :
    map(nullptr) // presence node
{

    yang_name = "option"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Tcp::Option::~Option()
{
}

bool Native::Flow::Record::Collect::Transport::Tcp::Option::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Flow::Record::Collect::Transport::Tcp::Option::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Tcp::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Tcp::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Tcp::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Flow::Record::Collect::Transport::Tcp::Option::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Tcp::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Tcp::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Transport::Tcp::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Transport::Tcp::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Tcp::Option::Map::Map()
    :
    long_{YType::empty, "long"}
{

    yang_name = "map"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Tcp::Option::Map::~Map()
{
}

bool Native::Flow::Record::Collect::Transport::Tcp::Option::Map::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Collect::Transport::Tcp::Option::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Tcp::Option::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Tcp::Option::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Tcp::Option::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Tcp::Option::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Tcp::Option::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Tcp::Option::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Tcp::Option::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Tcp::WindowSize::WindowSize()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"},
    sum{YType::empty, "sum"}
    	,
    average(nullptr) // presence node
{

    yang_name = "window-size"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Tcp::WindowSize::~WindowSize()
{
}

bool Native::Flow::Record::Collect::Transport::Tcp::WindowSize::has_data() const
{
    return maximum.is_set
	|| minimum.is_set
	|| sum.is_set
	|| (average !=  nullptr && average->has_data());
}

bool Native::Flow::Record::Collect::Transport::Tcp::WindowSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(sum.yfilter)
	|| (average !=  nullptr && average->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Tcp::WindowSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Tcp::WindowSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Tcp::WindowSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average")
    {
        if(average == nullptr)
        {
            average = std::make_shared<Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average>();
        }
        return average;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Tcp::WindowSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(average != nullptr)
    {
        children["average"] = average;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Tcp::WindowSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Tcp::WindowSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Tcp::WindowSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "minimum" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::Average()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "average"; yang_parent_name = "window-size"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::~Average()
{
}

bool Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Udp::Udp()
    :
    destination_port{YType::empty, "destination-port"},
    message_length{YType::empty, "message-length"},
    source_port{YType::empty, "source-port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Udp::~Udp()
{
}

bool Native::Flow::Record::Collect::Transport::Udp::has_data() const
{
    return destination_port.is_set
	|| message_length.is_set
	|| source_port.is_set;
}

bool Native::Flow::Record::Collect::Transport::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(message_length.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (message_length.is_set || is_set(message_length.yfilter)) leaf_name_data.push_back(message_length.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-length")
    {
        message_length = value;
        message_length.value_namespace = name_space;
        message_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "message-length")
    {
        message_length.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port" || name == "message-length" || name == "source-port")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Event::Event()
    :
    packet_loss(std::make_shared<Native::Flow::Record::Collect::Transport::Event::PacketLoss>())
{
    packet_loss->parent = this;

    yang_name = "event"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Event::~Event()
{
}

bool Native::Flow::Record::Collect::Transport::Event::has_data() const
{
    return (packet_loss !=  nullptr && packet_loss->has_data());
}

bool Native::Flow::Record::Collect::Transport::Event::has_operation() const
{
    return is_set(yfilter)
	|| (packet_loss !=  nullptr && packet_loss->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-loss")
    {
        if(packet_loss == nullptr)
        {
            packet_loss = std::make_shared<Native::Flow::Record::Collect::Transport::Event::PacketLoss>();
        }
        return packet_loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet_loss != nullptr)
    {
        children["packet-loss"] = packet_loss;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Transport::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Transport::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-loss")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Event::PacketLoss::PacketLoss()
    :
    counter(nullptr) // presence node
{

    yang_name = "packet-loss"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Event::PacketLoss::~PacketLoss()
{
}

bool Native::Flow::Record::Collect::Transport::Event::PacketLoss::has_data() const
{
    return (counter !=  nullptr && counter->has_data());
}

bool Native::Flow::Record::Collect::Transport::Event::PacketLoss::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Event::PacketLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Event::PacketLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Event::PacketLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter>();
        }
        return counter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Event::PacketLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Event::PacketLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Transport::Event::PacketLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Transport::Event::PacketLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::Counter()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "counter"; yang_parent_name = "packet-loss"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Packets::Packets()
    :
    out_of_order{YType::empty, "out-of-order"}
    	,
    expected(std::make_shared<Native::Flow::Record::Collect::Transport::Packets::Expected>())
	,lost(std::make_shared<Native::Flow::Record::Collect::Transport::Packets::Lost>())
{
    expected->parent = this;
    lost->parent = this;

    yang_name = "packets"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Packets::~Packets()
{
}

bool Native::Flow::Record::Collect::Transport::Packets::has_data() const
{
    return out_of_order.is_set
	|| (expected !=  nullptr && expected->has_data())
	|| (lost !=  nullptr && lost->has_data());
}

bool Native::Flow::Record::Collect::Transport::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_of_order.yfilter)
	|| (expected !=  nullptr && expected->has_operation())
	|| (lost !=  nullptr && lost->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_of_order.is_set || is_set(out_of_order.yfilter)) leaf_name_data.push_back(out_of_order.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expected")
    {
        if(expected == nullptr)
        {
            expected = std::make_shared<Native::Flow::Record::Collect::Transport::Packets::Expected>();
        }
        return expected;
    }

    if(child_yang_name == "lost")
    {
        if(lost == nullptr)
        {
            lost = std::make_shared<Native::Flow::Record::Collect::Transport::Packets::Lost>();
        }
        return lost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(expected != nullptr)
    {
        children["expected"] = expected;
    }

    if(lost != nullptr)
    {
        children["lost"] = lost;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-of-order")
    {
        out_of_order = value;
        out_of_order.value_namespace = name_space;
        out_of_order.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-of-order")
    {
        out_of_order.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expected" || name == "lost" || name == "out-of-order")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Packets::Expected::Expected()
    :
    counter{YType::empty, "counter"}
{

    yang_name = "expected"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Packets::Expected::~Expected()
{
}

bool Native::Flow::Record::Collect::Transport::Packets::Expected::has_data() const
{
    return counter.is_set;
}

bool Native::Flow::Record::Collect::Transport::Packets::Expected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Packets::Expected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Packets::Expected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Packets::Expected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Packets::Expected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Packets::Expected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Packets::Expected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Packets::Expected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Packets::Lost::Lost()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{

    yang_name = "lost"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Packets::Lost::~Lost()
{
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Packets::Lost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Packets::Lost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Packets::Lost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Collect::Transport::Packets::Lost::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Collect::Transport::Packets::Lost::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Packets::Lost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Packets::Lost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Collect::Transport::Packets::Lost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::Counter()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "counter"; yang_parent_name = "lost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::~Counter()
{
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::Rate()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "rate"; yang_parent_name = "lost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::~Rate()
{
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Packets::Lost::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::RoundTripTime::RoundTripTime()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    samples{YType::empty, "samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "round-trip-time"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::RoundTripTime::~RoundTripTime()
{
}

bool Native::Flow::Record::Collect::Transport::RoundTripTime::has_data() const
{
    return max.is_set
	|| min.is_set
	|| samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Collect::Transport::RoundTripTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::RoundTripTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "round-trip-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::RoundTripTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (samples.is_set || is_set(samples.yfilter)) leaf_name_data.push_back(samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::RoundTripTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::RoundTripTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::RoundTripTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples")
    {
        samples = value;
        samples.value_namespace = name_space;
        samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::RoundTripTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "samples")
    {
        samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::RoundTripTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Rtp::Rtp()
    :
    payload_type{YType::empty, "payload-type"},
    ssrc{YType::empty, "ssrc"}
    	,
    flow(std::make_shared<Native::Flow::Record::Collect::Transport::Rtp::Flow_>())
	,jitter(std::make_shared<Native::Flow::Record::Collect::Transport::Rtp::Jitter>())
{
    flow->parent = this;
    jitter->parent = this;

    yang_name = "rtp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Rtp::~Rtp()
{
}

bool Native::Flow::Record::Collect::Transport::Rtp::has_data() const
{
    return payload_type.is_set
	|| ssrc.is_set
	|| (flow !=  nullptr && flow->has_data())
	|| (jitter !=  nullptr && jitter->has_data());
}

bool Native::Flow::Record::Collect::Transport::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_type.yfilter)
	|| ydk::is_set(ssrc.yfilter)
	|| (flow !=  nullptr && flow->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_type.is_set || is_set(payload_type.yfilter)) leaf_name_data.push_back(payload_type.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Collect::Transport::Rtp::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Flow::Record::Collect::Transport::Rtp::Jitter>();
        }
        return jitter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-type")
    {
        payload_type = value;
        payload_type.value_namespace = name_space;
        payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-type")
    {
        payload_type.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "jitter" || name == "payload-type" || name == "ssrc")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Rtp::Flow_::Flow_()
    :
    count{YType::empty, "count"}
{

    yang_name = "flow"; yang_parent_name = "rtp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Rtp::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Collect::Transport::Rtp::Flow_::has_data() const
{
    return count.is_set;
}

bool Native::Flow::Record::Collect::Transport::Rtp::Flow_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Rtp::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Rtp::Flow_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Rtp::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Rtp::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Rtp::Flow_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Rtp::Flow_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Rtp::Flow_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Rtp::Jitter::Jitter()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
    	,
    mean(nullptr) // presence node
{

    yang_name = "jitter"; yang_parent_name = "rtp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Rtp::Jitter::~Jitter()
{
}

bool Native::Flow::Record::Collect::Transport::Rtp::Jitter::has_data() const
{
    return maximum.is_set
	|| minimum.is_set
	|| (mean !=  nullptr && mean->has_data());
}

bool Native::Flow::Record::Collect::Transport::Rtp::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| (mean !=  nullptr && mean->has_operation());
}

std::string Native::Flow::Record::Collect::Transport::Rtp::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Rtp::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Rtp::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mean")
    {
        if(mean == nullptr)
        {
            mean = std::make_shared<Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean>();
        }
        return mean;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Rtp::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mean != nullptr)
    {
        children["mean"] = mean;
    }

    return children;
}

void Native::Flow::Record::Collect::Transport::Rtp::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Rtp::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Rtp::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mean" || name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::Mean()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "mean"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::~Mean()
{
}

bool Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mean";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Default()
    :
    description{YType::str, "description"}
    	,
    collect(std::make_shared<Native::Flow::Record::Default::Collect>())
	,match(std::make_shared<Native::Flow::Record::Default::Match>())
{
    collect->parent = this;
    match->parent = this;

    yang_name = "default"; yang_parent_name = "record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::~Default()
{
}

bool Native::Flow::Record::Default::has_data() const
{
    return description.is_set
	|| (collect !=  nullptr && collect->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Flow::Record::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (collect !=  nullptr && collect->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Flow::Record::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collect")
    {
        if(collect == nullptr)
        {
            collect = std::make_shared<Native::Flow::Record::Default::Collect>();
        }
        return collect;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Flow::Record::Default::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(collect != nullptr)
    {
        children["collect"] = collect;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Flow::Record::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collect" || name == "match" || name == "description")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Collect()
    :
    application(std::make_shared<Native::Flow::Record::Default::Collect::Application>())
	,connection(std::make_shared<Native::Flow::Record::Default::Collect::Connection>())
	,counter(std::make_shared<Native::Flow::Record::Default::Collect::Counter>())
	,datalink(std::make_shared<Native::Flow::Record::Default::Collect::Datalink>())
	,flow(std::make_shared<Native::Flow::Record::Default::Collect::Flow_>())
	,interface(std::make_shared<Native::Flow::Record::Default::Collect::Interface>())
	,ipv4(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6>())
	,metadata(std::make_shared<Native::Flow::Record::Default::Collect::Metadata>())
	,monitor(std::make_shared<Native::Flow::Record::Default::Collect::Monitor>())
	,mpls(std::make_shared<Native::Flow::Record::Default::Collect::Mpls>())
	,network(std::make_shared<Native::Flow::Record::Default::Collect::Network>())
	,pfr(std::make_shared<Native::Flow::Record::Default::Collect::Pfr>())
	,policy(std::make_shared<Native::Flow::Record::Default::Collect::Policy>())
	,routing(std::make_shared<Native::Flow::Record::Default::Collect::Routing>())
	,services(std::make_shared<Native::Flow::Record::Default::Collect::Services>())
	,timestamp(std::make_shared<Native::Flow::Record::Default::Collect::Timestamp>())
	,transport(std::make_shared<Native::Flow::Record::Default::Collect::Transport>())
{
    application->parent = this;
    connection->parent = this;
    counter->parent = this;
    datalink->parent = this;
    flow->parent = this;
    interface->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    metadata->parent = this;
    monitor->parent = this;
    mpls->parent = this;
    network->parent = this;
    pfr->parent = this;
    policy->parent = this;
    routing->parent = this;
    services->parent = this;
    timestamp->parent = this;
    transport->parent = this;

    yang_name = "collect"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::~Collect()
{
}

bool Native::Flow::Record::Default::Collect::has_data() const
{
    return (application !=  nullptr && application->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (counter !=  nullptr && counter->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metadata !=  nullptr && metadata->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (timestamp !=  nullptr && timestamp->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::has_operation() const
{
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (counter !=  nullptr && counter->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metadata !=  nullptr && metadata->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (timestamp !=  nullptr && timestamp->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Default::Collect::Application>();
        }
        return application;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<Native::Flow::Record::Default::Collect::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Flow::Record::Default::Collect::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Default::Collect::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Flow::Record::Default::Collect::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metadata")
    {
        if(metadata == nullptr)
        {
            metadata = std::make_shared<Native::Flow::Record::Default::Collect::Metadata>();
        }
        return metadata;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Flow::Record::Default::Collect::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Flow::Record::Default::Collect::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Default::Collect::Network>();
        }
        return network;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::Flow::Record::Default::Collect::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Flow::Record::Default::Collect::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Flow::Record::Default::Collect::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Flow::Record::Default::Collect::Services>();
        }
        return services;
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Native::Flow::Record::Default::Collect::Timestamp>();
        }
        return timestamp;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(datalink != nullptr)
    {
        children["datalink"] = datalink;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metadata != nullptr)
    {
        children["metadata"] = metadata;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(services != nullptr)
    {
        children["services"] = services;
    }

    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "connection" || name == "counter" || name == "datalink" || name == "flow" || name == "interface" || name == "ipv4" || name == "ipv6" || name == "metadata" || name == "monitor" || name == "mpls" || name == "network" || name == "pfr" || name == "policy" || name == "routing" || name == "services" || name == "timestamp" || name == "transport")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Application()
    :
    vendor{YType::empty, "vendor"},
    version{YType::empty, "version"}
    	,
    dns(std::make_shared<Native::Flow::Record::Default::Collect::Application::Dns>())
	,http(std::make_shared<Native::Flow::Record::Default::Collect::Application::Http>())
	,media(std::make_shared<Native::Flow::Record::Default::Collect::Application::Media>())
	,name(nullptr) // presence node
	,nntp(std::make_shared<Native::Flow::Record::Default::Collect::Application::Nntp>())
	,pop3(std::make_shared<Native::Flow::Record::Default::Collect::Application::Pop3>())
	,rtmp(std::make_shared<Native::Flow::Record::Default::Collect::Application::Rtmp>())
	,rtsp(std::make_shared<Native::Flow::Record::Default::Collect::Application::Rtsp>())
	,sip(std::make_shared<Native::Flow::Record::Default::Collect::Application::Sip>())
	,smtp(std::make_shared<Native::Flow::Record::Default::Collect::Application::Smtp>())
	,ssl(std::make_shared<Native::Flow::Record::Default::Collect::Application::Ssl>())
{
    dns->parent = this;
    http->parent = this;
    media->parent = this;
    nntp->parent = this;
    pop3->parent = this;
    rtmp->parent = this;
    rtsp->parent = this;
    sip->parent = this;
    smtp->parent = this;
    ssl->parent = this;

    yang_name = "application"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::~Application()
{
}

bool Native::Flow::Record::Default::Collect::Application::has_data() const
{
    return vendor.is_set
	|| version.is_set
	|| (dns !=  nullptr && dns->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (name !=  nullptr && name->has_data())
	|| (nntp !=  nullptr && nntp->has_data())
	|| (pop3 !=  nullptr && pop3->has_data())
	|| (rtmp !=  nullptr && rtmp->has_data())
	|| (rtsp !=  nullptr && rtsp->has_data())
	|| (sip !=  nullptr && sip->has_data())
	|| (smtp !=  nullptr && smtp->has_data())
	|| (ssl !=  nullptr && ssl->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (dns !=  nullptr && dns->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (name !=  nullptr && name->has_operation())
	|| (nntp !=  nullptr && nntp->has_operation())
	|| (pop3 !=  nullptr && pop3->has_operation())
	|| (rtmp !=  nullptr && rtmp->has_operation())
	|| (rtsp !=  nullptr && rtsp->has_operation())
	|| (sip !=  nullptr && sip->has_operation())
	|| (smtp !=  nullptr && smtp->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Flow::Record::Default::Collect::Application::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Flow::Record::Default::Collect::Application::Http>();
        }
        return http;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media>();
        }
        return media;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Flow::Record::Default::Collect::Application::Name>();
        }
        return name;
    }

    if(child_yang_name == "nntp")
    {
        if(nntp == nullptr)
        {
            nntp = std::make_shared<Native::Flow::Record::Default::Collect::Application::Nntp>();
        }
        return nntp;
    }

    if(child_yang_name == "pop3")
    {
        if(pop3 == nullptr)
        {
            pop3 = std::make_shared<Native::Flow::Record::Default::Collect::Application::Pop3>();
        }
        return pop3;
    }

    if(child_yang_name == "rtmp")
    {
        if(rtmp == nullptr)
        {
            rtmp = std::make_shared<Native::Flow::Record::Default::Collect::Application::Rtmp>();
        }
        return rtmp;
    }

    if(child_yang_name == "rtsp")
    {
        if(rtsp == nullptr)
        {
            rtsp = std::make_shared<Native::Flow::Record::Default::Collect::Application::Rtsp>();
        }
        return rtsp;
    }

    if(child_yang_name == "sip")
    {
        if(sip == nullptr)
        {
            sip = std::make_shared<Native::Flow::Record::Default::Collect::Application::Sip>();
        }
        return sip;
    }

    if(child_yang_name == "smtp")
    {
        if(smtp == nullptr)
        {
            smtp = std::make_shared<Native::Flow::Record::Default::Collect::Application::Smtp>();
        }
        return smtp;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Flow::Record::Default::Collect::Application::Ssl>();
        }
        return ssl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(media != nullptr)
    {
        children["media"] = media;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    if(nntp != nullptr)
    {
        children["nntp"] = nntp;
    }

    if(pop3 != nullptr)
    {
        children["pop3"] = pop3;
    }

    if(rtmp != nullptr)
    {
        children["rtmp"] = rtmp;
    }

    if(rtsp != nullptr)
    {
        children["rtsp"] = rtsp;
    }

    if(sip != nullptr)
    {
        children["sip"] = sip;
    }

    if(smtp != nullptr)
    {
        children["smtp"] = smtp;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns" || name == "http" || name == "media" || name == "name" || name == "nntp" || name == "pop3" || name == "rtmp" || name == "rtsp" || name == "sip" || name == "smtp" || name == "ssl" || name == "vendor" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Dns::Dns()
    :
    domain_name{YType::empty, "domain-name"}
{

    yang_name = "dns"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Dns::~Dns()
{
}

bool Native::Flow::Record::Default::Collect::Application::Dns::has_data() const
{
    return domain_name.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Http::Http()
    :
    host{YType::empty, "host"},
    referer{YType::empty, "referer"},
    url{YType::empty, "url"},
    user_agent{YType::empty, "user-agent"}
    	,
    uri(std::make_shared<Native::Flow::Record::Default::Collect::Application::Http::Uri>())
{
    uri->parent = this;

    yang_name = "http"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Http::~Http()
{
}

bool Native::Flow::Record::Default::Collect::Application::Http::has_data() const
{
    return host.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| (uri !=  nullptr && uri->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| (uri !=  nullptr && uri->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uri")
    {
        if(uri == nullptr)
        {
            uri = std::make_shared<Native::Flow::Record::Default::Collect::Application::Http::Uri>();
        }
        return uri;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(uri != nullptr)
    {
        children["uri"] = uri;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Application::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referer")
    {
        referer = value;
        referer.value_namespace = name_space;
        referer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
        user_agent.value_namespace = name_space;
        user_agent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "referer")
    {
        referer.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "user-agent")
    {
        user_agent.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uri" || name == "host" || name == "referer" || name == "url" || name == "user-agent")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Http::Uri::Uri()
    :
    statistics{YType::empty, "statistics"}
{

    yang_name = "uri"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Http::Uri::~Uri()
{
}

bool Native::Flow::Record::Default::Collect::Application::Http::Uri::has_data() const
{
    return statistics.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Http::Uri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Http::Uri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Http::Uri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Http::Uri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Http::Uri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Http::Uri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Http::Uri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Http::Uri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Media()
    :
    event{YType::empty, "event"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "media"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::~Media()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::has_data() const
{
    return event.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Media::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Media::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Media::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "event")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Bytes()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::Counter()
    :
    long_{YType::empty, "long"}
{

    yang_name = "counter"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Packets()
    :
    counter(nullptr) // presence node
	,rate(nullptr) // presence node
{

    yang_name = "packets"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::~Packets()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::Counter()
    :
    long_{YType::empty, "long"}
{

    yang_name = "counter"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Rate()
    :
    variation(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::~Rate()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::has_data() const
{
    return (variation !=  nullptr && variation->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (variation !=  nullptr && variation->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "variation")
    {
        if(variation == nullptr)
        {
            variation = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation>();
        }
        return variation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(variation != nullptr)
    {
        children["variation"] = variation;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "variation")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::Variation()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "variation"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::~Variation()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Name::Name()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "name"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Name::~Name()
{
}

bool Native::Flow::Record::Default::Collect::Application::Name::has_data() const
{
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Nntp::Nntp()
    :
    group_name{YType::empty, "group-name"}
{

    yang_name = "nntp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Nntp::~Nntp()
{
}

bool Native::Flow::Record::Default::Collect::Application::Nntp::has_data() const
{
    return group_name.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Nntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Nntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Nntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Nntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Nntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Nntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Nntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Nntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Pop3::Pop3()
    :
    server{YType::empty, "server"}
{

    yang_name = "pop3"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Pop3::~Pop3()
{
}

bool Native::Flow::Record::Default::Collect::Application::Pop3::has_data() const
{
    return server.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Pop3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Pop3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Pop3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Pop3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Pop3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Pop3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Pop3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Pop3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Rtmp::Rtmp()
    :
    pageurl{YType::empty, "pageUrl"}
{

    yang_name = "rtmp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Rtmp::~Rtmp()
{
}

bool Native::Flow::Record::Default::Collect::Application::Rtmp::has_data() const
{
    return pageurl.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Rtmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pageurl.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Rtmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Rtmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pageurl.is_set || is_set(pageurl.yfilter)) leaf_name_data.push_back(pageurl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Rtmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Rtmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Rtmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pageUrl")
    {
        pageurl = value;
        pageurl.value_namespace = name_space;
        pageurl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Rtmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pageUrl")
    {
        pageurl.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Rtmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pageUrl")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Rtsp::Rtsp()
    :
    host{YType::empty, "host"}
{

    yang_name = "rtsp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Rtsp::~Rtsp()
{
}

bool Native::Flow::Record::Default::Collect::Application::Rtsp::has_data() const
{
    return host.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Rtsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Rtsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Rtsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Rtsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Rtsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Rtsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Rtsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Rtsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Sip::Sip()
    :
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "sip"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Sip::~Sip()
{
}

bool Native::Flow::Record::Default::Collect::Application::Sip::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Sip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Sip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Sip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Sip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Sip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Sip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Sip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Sip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Smtp::Smtp()
    :
    sender{YType::empty, "sender"},
    server{YType::empty, "server"}
{

    yang_name = "smtp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Smtp::~Smtp()
{
}

bool Native::Flow::Record::Default::Collect::Application::Smtp::has_data() const
{
    return sender.is_set
	|| server.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Smtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Smtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Smtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Smtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Smtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Smtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Smtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Smtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender" || name == "server")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Ssl::Ssl()
    :
    common_name{YType::empty, "common-name"}
{

    yang_name = "ssl"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Application::Ssl::~Ssl()
{
}

bool Native::Flow::Record::Default::Collect::Application::Ssl::has_data() const
{
    return common_name.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_name.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.yfilter)) leaf_name_data.push_back(common_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Application::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Application::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Application::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-name")
    {
        common_name = value;
        common_name.value_namespace = name_space;
        common_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-name")
    {
        common_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-name")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Connection()
    :
    id{YType::empty, "id"},
    initiator{YType::empty, "initiator"},
    new_connections{YType::empty, "new-connections"},
    sum_duration{YType::empty, "sum-duration"},
    transaction_id{YType::empty, "transaction-id"}
    	,
    client(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client>())
	,delay(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay>())
	,server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server>())
	,transaction(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction>())
{
    client->parent = this;
    delay->parent = this;
    server->parent = this;
    transaction->parent = this;

    yang_name = "connection"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::~Connection()
{
}

bool Native::Flow::Record::Default::Collect::Connection::has_data() const
{
    return id.is_set
	|| initiator.is_set
	|| new_connections.is_set
	|| sum_duration.is_set
	|| transaction_id.is_set
	|| (client !=  nullptr && client->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transaction !=  nullptr && transaction->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(initiator.yfilter)
	|| ydk::is_set(new_connections.yfilter)
	|| ydk::is_set(sum_duration.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transaction !=  nullptr && transaction->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (initiator.is_set || is_set(initiator.yfilter)) leaf_name_data.push_back(initiator.get_name_leafdata());
    if (new_connections.is_set || is_set(new_connections.yfilter)) leaf_name_data.push_back(new_connections.get_name_leafdata());
    if (sum_duration.is_set || is_set(sum_duration.yfilter)) leaf_name_data.push_back(sum_duration.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client>();
        }
        return client;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server>();
        }
        return server;
    }

    if(child_yang_name == "transaction")
    {
        if(transaction == nullptr)
        {
            transaction = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction>();
        }
        return transaction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(transaction != nullptr)
    {
        children["transaction"] = transaction;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initiator")
    {
        initiator = value;
        initiator.value_namespace = name_space;
        initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-connections")
    {
        new_connections = value;
        new_connections.value_namespace = name_space;
        new_connections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-duration")
    {
        sum_duration = value;
        sum_duration.value_namespace = name_space;
        sum_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "initiator")
    {
        initiator.yfilter = yfilter;
    }
    if(value_path == "new-connections")
    {
        new_connections.yfilter = yfilter;
    }
    if(value_path == "sum-duration")
    {
        sum_duration.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "delay" || name == "server" || name == "transaction" || name == "id" || name == "initiator" || name == "new-connections" || name == "sum-duration" || name == "transaction-id")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Client()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter>())
	,ipv4(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Ipv6>())
	,transport(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Transport>())
{
    counter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "client"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::~Client()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Counter()
    :
    bytes(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::has_data() const
{
    return (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::has_operation() const
{
    return is_set(yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
    	,
    network(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network>())
	,transport(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport>())
{
    network->parent = this;
    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "transport" || name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{

    yang_name = "network"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{

    yang_name = "transport"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Client::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Transport::has_data() const
{
    return port.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Client::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Delay()
    :
    all{YType::empty, "all"}
    	,
    application(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Application>())
	,network(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network>())
	,response(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response>())
{
    application->parent = this;
    network->parent = this;
    response->parent = this;

    yang_name = "delay"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::~Delay()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::has_data() const
{
    return all.is_set
	|| (application !=  nullptr && application->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Application>();
        }
        return application;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network>();
        }
        return network;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "network" || name == "response" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Application::Application()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "application"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Application::~Application()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Application::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::Network()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer>())
	,long_lived(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived>())
	,to_client(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient>())
	,to_server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer>())
{
    client_to_server->parent = this;
    long_lived->parent = this;
    to_client->parent = this;
    to_server->parent = this;

    yang_name = "network"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::~Network()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::has_data() const
{
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (long_lived !=  nullptr && long_lived->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (long_lived !=  nullptr && long_lived->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "long-lived")
    {
        if(long_lived == nullptr)
        {
            long_lived = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived>();
        }
        return long_lived;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client_to_server != nullptr)
    {
        children["client-to-server"] = client_to_server;
    }

    if(long_lived != nullptr)
    {
        children["long-lived"] = long_lived;
    }

    if(to_client != nullptr)
    {
        children["to-client"] = to_client;
    }

    if(to_server != nullptr)
    {
        children["to-server"] = to_server;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-server" || name == "long-lived" || name == "to-client" || name == "to-server")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-server"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::LongLived()
    :
    client_to_serve(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe>())
	,to_client(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient>())
	,to_serve(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe>())
{
    client_to_serve->parent = this;
    to_client->parent = this;
    to_serve->parent = this;

    yang_name = "long-lived"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::~LongLived()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::has_data() const
{
    return (client_to_serve !=  nullptr && client_to_serve->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_serve !=  nullptr && to_serve->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_serve !=  nullptr && client_to_serve->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_serve !=  nullptr && to_serve->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-lived";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-serve")
    {
        if(client_to_serve == nullptr)
        {
            client_to_serve = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe>();
        }
        return client_to_serve;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-serve")
    {
        if(to_serve == nullptr)
        {
            to_serve = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe>();
        }
        return to_serve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client_to_serve != nullptr)
    {
        children["client-to-serve"] = client_to_serve;
    }

    if(to_client != nullptr)
    {
        children["to-client"] = to_client;
    }

    if(to_serve != nullptr)
    {
        children["to-serve"] = to_serve;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-serve" || name == "to-client" || name == "to-serve")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::ClientToServe()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-serve"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::~ClientToServe()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::ToClient()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "to-client"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::ToServe()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "to-serve"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::~ToServe()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::ToClient()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-client"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::ToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-server"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::Response()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer>())
	,to_server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer>())
{
    client_to_server->parent = this;
    to_server->parent = this;

    yang_name = "response"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::~Response()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::has_data() const
{
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client_to_server != nullptr)
    {
        children["client-to-server"] = client_to_server;
    }

    if(to_server != nullptr)
    {
        children["to-server"] = to_server;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-server" || name == "to-server")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-server"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::ToServer()
    :
    histogram{YType::enumeration, "histogram"},
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-server"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::has_data() const
{
    return histogram.is_set
	|| max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(histogram.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (histogram.is_set || is_set(histogram.yfilter)) leaf_name_data.push_back(histogram.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "histogram")
    {
        histogram = value;
        histogram.value_namespace = name_space;
        histogram.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "histogram")
    {
        histogram.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "histogram" || name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Server()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter>())
	,ipv4(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Ipv6>())
	,transport(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Transport>())
{
    counter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "server"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::~Server()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Counter()
    :
    responses{YType::empty, "responses"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes>())
	,packets(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::has_data() const
{
    return responses.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(responses.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (responses.is_set || is_set(responses.yfilter)) leaf_name_data.push_back(responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "responses")
    {
        responses = value;
        responses.value_namespace = name_space;
        responses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "responses")
    {
        responses.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "responses")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
    	,
    network(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network>())
	,transport(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport>())
{
    network->parent = this;
    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "transport" || name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{

    yang_name = "network"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{

    yang_name = "transport"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::has_data() const
{
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Server::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Transport::has_data() const
{
    return port.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Server::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Transaction()
    :
    all{YType::empty, "all"}
    	,
    counter(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction::Counter>())
	,duration(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction::Duration>())
{
    counter->parent = this;
    duration->parent = this;

    yang_name = "transaction"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::~Transaction()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::has_data() const
{
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Transaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transaction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Transaction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Transaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Transaction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(duration != nullptr)
    {
        children["duration"] = duration;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "duration" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::Counter()
    :
    complete{YType::empty, "complete"}
{

    yang_name = "counter"; yang_parent_name = "transaction"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::has_data() const
{
    return complete.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete.is_set || is_set(complete.yfilter)) leaf_name_data.push_back(complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete")
    {
        complete = value;
        complete.value_namespace = name_space;
        complete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete")
    {
        complete.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::Duration()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "duration"; yang_parent_name = "transaction"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::~Duration()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::has_data() const
{
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Counter()
    :
    flows{YType::empty, "flows"}
    	,
    bytes(nullptr) // presence node
	,packets(nullptr) // presence node
{

    yang_name = "counter"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Counter::has_data() const
{
    return flows.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flows.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flows.is_set || is_set(flows.yfilter)) leaf_name_data.push_back(flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        children["packets"] = packets;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flows")
    {
        flows = value;
        flows.value_namespace = name_space;
        flows.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flows")
    {
        flows.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "flows")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"}
    	,
    rate(nullptr) // presence node
	,squared(std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Squared>())
	,layer2(std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2>())
{
    squared->parent = this;
    layer2->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::has_data() const
{
    return long_.is_set
	|| (rate !=  nullptr && rate->has_data())
	|| (squared !=  nullptr && squared->has_data())
	|| (layer2 !=  nullptr && layer2->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| (rate !=  nullptr && rate->has_operation())
	|| (squared !=  nullptr && squared->has_operation())
	|| (layer2 !=  nullptr && layer2->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "squared")
    {
        if(squared == nullptr)
        {
            squared = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Squared>();
        }
        return squared;
    }

    if(child_yang_name == "layer2")
    {
        if(layer2 == nullptr)
        {
            layer2 = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2>();
        }
        return layer2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    if(squared != nullptr)
    {
        children["squared"] = squared;
    }

    if(layer2 != nullptr)
    {
        children["layer2"] = layer2;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "squared" || name == "layer2" || name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::has_data() const
{
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(per_flow != nullptr)
    {
        children["per-flow"] = per_flow;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::Squared()
    :
    long_{YType::empty, "long"}
{

    yang_name = "squared"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::~Squared()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "squared";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::Layer2()
    :
    long_{YType::empty, "long"}
{

    yang_name = "layer2"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::~Layer2()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Packets::Packets()
    :
    dropped{YType::empty, "dropped"},
    long_{YType::empty, "long"}
    	,
    rate(nullptr) // presence node
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Default::Collect::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::has_data() const
{
    return dropped.is_set
	|| long_.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(long_.yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Default::Collect::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Default::Collect::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Flow::Record::Default::Collect::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "dropped" || name == "long")
        return true;
    return false;
}

const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::all {0, "all"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket1 {1, "bucket1"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket2 {2, "bucket2"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket3 {3, "bucket3"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket4 {4, "bucket4"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket5 {5, "bucket5"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket6 {6, "bucket6"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket7 {7, "bucket7"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::late {8, "late"};


}
}

