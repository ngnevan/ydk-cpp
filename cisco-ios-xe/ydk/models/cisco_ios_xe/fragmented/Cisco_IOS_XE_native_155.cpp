
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_155.hpp"
#include "Cisco_IOS_XE_native_156.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::Intervals()
    :
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    wait{YType::uint32, "wait"}
{

    yang_name = "intervals"; yang_parent_name = "lsp-gen-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::~Intervals()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::has_data() const
{
    return interval.is_set
	|| initial_wait.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial-wait" || name == "wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevels()
    :
    intervals_level_1(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>())
	,intervals_level_2(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>())
{
    intervals_level_1->parent = this;
    intervals_level_2->parent = this;

    yang_name = "intervals-levels"; yang_parent_name = "lsp-gen-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::~IntervalsLevels()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::has_data() const
{
    return (intervals_level_1 !=  nullptr && intervals_level_1->has_data())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_data());
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::has_operation() const
{
    return is_set(yfilter)
	|| (intervals_level_1 !=  nullptr && intervals_level_1->has_operation())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_operation());
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-levels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals-level-1")
    {
        if(intervals_level_1 == nullptr)
        {
            intervals_level_1 = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>();
        }
        return intervals_level_1;
    }

    if(child_yang_name == "intervals-level-2")
    {
        if(intervals_level_2 == nullptr)
        {
            intervals_level_2 = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>();
        }
        return intervals_level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intervals_level_1 != nullptr)
    {
        children["intervals-level-1"] = intervals_level_1;
    }

    if(intervals_level_2 != nullptr)
    {
        children["intervals-level-2"] = intervals_level_2;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals-level-1" || name == "intervals-level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::IntervalsLevel1()
    :
    level_1{YType::empty, "level-1"},
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    wait{YType::uint32, "wait"}
{

    yang_name = "intervals-level-1"; yang_parent_name = "intervals-levels"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::~IntervalsLevel1()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_data() const
{
    return level_1.is_set
	|| interval.is_set
	|| initial_wait.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-level-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "interval" || name == "initial-wait" || name == "wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::IntervalsLevel2()
    :
    level_2{YType::empty, "level-2"},
    interval{YType::uint32, "interval"},
    initial_wait{YType::uint32, "initial-wait"},
    wait{YType::uint32, "wait"}
{

    yang_name = "intervals-level-2"; yang_parent_name = "intervals-levels"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::~IntervalsLevel2()
{
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_data() const
{
    return level_2.is_set
	|| interval.is_set
	|| initial_wait.is_set
	|| wait.is_set;
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-level-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-2" || name == "interval" || name == "initial-wait" || name == "wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Microloop::Microloop()
    :
    avoidance(nullptr) // presence node
{

    yang_name = "microloop"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Microloop::~Microloop()
{
}

bool Native::Router::IsisContainer::Isis::Microloop::has_data() const
{
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Native::Router::IsisContainer::Isis::Microloop::has_operation() const
{
    return is_set(yfilter)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Microloop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avoidance")
    {
        if(avoidance == nullptr)
        {
            avoidance = std::make_shared<Native::Router::IsisContainer::Isis::Microloop::Avoidance>();
        }
        return avoidance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Microloop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(avoidance != nullptr)
    {
        children["avoidance"] = avoidance;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Microloop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Microloop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Microloop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avoidance")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Microloop::Avoidance::Avoidance()
    :
    disable{YType::empty, "disable"},
    protected_{YType::empty, "protected"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{

    yang_name = "avoidance"; yang_parent_name = "microloop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Microloop::Avoidance::~Avoidance()
{
}

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_data() const
{
    return disable.is_set
	|| protected_.is_set
	|| rib_update_delay.is_set;
}

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Microloop::Avoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Microloop::Avoidance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Microloop::Avoidance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Microloop::Avoidance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "protected" || name == "rib-update-delay")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::Mpls()
    :
    ldp(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng>())
{
    ldp->parent = this;
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::~Mpls()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp" || name == "traffic-eng")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Ldp()
    :
    sync{YType::empty, "sync"},
    sync_igp_shortcuts{YType::empty, "sync-igp-shortcuts"}
    	,
    autoconfig(nullptr) // presence node
{

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::~Ldp()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::has_data() const
{
    return sync.is_set
	|| sync_igp_shortcuts.is_set
	|| (autoconfig !=  nullptr && autoconfig->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync.yfilter)
	|| ydk::is_set(sync_igp_shortcuts.yfilter)
	|| (autoconfig !=  nullptr && autoconfig->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());
    if (sync_igp_shortcuts.is_set || is_set(sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(sync_igp_shortcuts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig>();
        }
        return autoconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-igp-shortcuts")
    {
        sync_igp_shortcuts = value;
        sync_igp_shortcuts.value_namespace = name_space;
        sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
    if(value_path == "sync-igp-shortcuts")
    {
        sync_igp_shortcuts.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoconfig" || name == "sync" || name == "sync-igp-shortcuts")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::Autoconfig()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"}
{

    yang_name = "autoconfig"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::~Autoconfig()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_data() const
{
    return level_1.is_set
	|| level_2.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::TrafficEng()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    router_id(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId>())
	,scanner(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner>())
{
    router_id->parent = this;
    scanner->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::has_data() const
{
    return level_1.is_set
	|| level_2.is_set
	|| multicast_intact.is_set
	|| (router_id !=  nullptr && router_id->has_data())
	|| (scanner !=  nullptr && scanner->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(multicast_intact.yfilter)
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (scanner !=  nullptr && scanner->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.yfilter)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "scanner")
    {
        if(scanner == nullptr)
        {
            scanner = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner>();
        }
        return scanner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(scanner != nullptr)
    {
        children["scanner"] = scanner;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
        multicast_intact.value_namespace = name_space;
        multicast_intact.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "scanner" || name == "level-1" || name == "level-2" || name == "multicast-intact")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::RouterId()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "router-id"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::~RouterId()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::Scanner()
    :
    interval{YType::uint32, "interval"},
    max_flash{YType::uint32, "max-flash"}
{

    yang_name = "scanner"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::~Scanner()
{
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::has_data() const
{
    return interval.is_set
	|| max_flash.is_set;
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(max_flash.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scanner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (max_flash.is_set || is_set(max_flash.yfilter)) leaf_name_data.push_back(max_flash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flash")
    {
        max_flash = value;
        max_flash.value_namespace = name_space;
        max_flash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "max-flash")
    {
        max_flash.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "max-flash")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Net::Net()
    :
    tag{YType::str, "tag"}
{

    yang_name = "net"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Net::~Net()
{
}

bool Native::Router::IsisContainer::Isis::Net::has_data() const
{
    return tag.is_set;
}

bool Native::Router::IsisContainer::Isis::Net::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Net::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net" <<"[tag='" <<tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Net::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Net::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Net::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Net::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Net::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Net::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    ietf{YType::empty, "ietf"},
    interval{YType::uint16, "interval"}
    	,
    interface(std::make_shared<Native::Router::IsisContainer::Isis::Nsf::Interface>())
{
    interface->parent = this;

    yang_name = "nsf"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Nsf::~Nsf()
{
}

bool Native::Router::IsisContainer::Isis::Nsf::has_data() const
{
    return cisco.is_set
	|| ietf.is_set
	|| interval.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::IsisContainer::Isis::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::IsisContainer::Isis::Nsf::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "cisco" || name == "ietf" || name == "interval")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Nsf::Interface::Interface()
    :
    wait{YType::uint8, "wait"}
{

    yang_name = "interface"; yang_parent_name = "nsf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Nsf::Interface::~Interface()
{
}

bool Native::Router::IsisContainer::Isis::Nsf::Interface::has_data() const
{
    return wait.is_set;
}

bool Native::Router::IsisContainer::Isis::Nsf::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Nsf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Nsf::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Nsf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Nsf::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Nsf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Nsf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Nsf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Partition::Partition()
    :
    avoidance{YType::empty, "avoidance"}
{

    yang_name = "partition"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Partition::~Partition()
{
}

bool Native::Router::IsisContainer::Isis::Partition::has_data() const
{
    return avoidance.is_set;
}

bool Native::Router::IsisContainer::Isis::Partition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avoidance.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Partition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Partition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avoidance.is_set || is_set(avoidance.yfilter)) leaf_name_data.push_back(avoidance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Partition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Partition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Partition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avoidance")
    {
        avoidance = value;
        avoidance.value_namespace = name_space;
        avoidance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Partition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avoidance")
    {
        avoidance.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Partition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avoidance")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::IsisContainer::Isis::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::IsisContainer::Isis::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::IsisContainer::Isis::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Disable::Disable()
{

    yang_name = "disable"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Disable::~Disable()
{
}

bool Native::Router::IsisContainer::Isis::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : passive_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::IsisContainer::Isis::Disable::PassiveInterface::has_data() const
{
    return interface.is_set;
}

bool Native::Router::IsisContainer::Isis::Disable::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Disable::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Disable::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Disable::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Protocol::Protocol()
    :
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "protocol"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Protocol::~Protocol()
{
}

bool Native::Router::IsisContainer::Isis::Protocol::has_data() const
{
    return shutdown.is_set;
}

bool Native::Router::IsisContainer::Isis::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SegmentRouting::SegmentRouting()
    :
    mpls{YType::empty, "mpls"}
    	,
    prefix_sid_map(std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap>())
{
    prefix_sid_map->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SegmentRouting::~SegmentRouting()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::has_data() const
{
    return mpls.is_set
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-map" || name == "mpls")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::PrefixSidMap()
    :
    advertise_local{YType::empty, "advertise-local"}
    	,
    receive(nullptr) // presence node
{

    yang_name = "prefix-sid-map"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::has_data() const
{
    return advertise_local.is_set
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_local.yfilter)
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_local.is_set || is_set(advertise_local.yfilter)) leaf_name_data.push_back(advertise_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
        advertise_local.value_namespace = name_space;
        advertise_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-local")
    {
        advertise_local.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "advertise-local")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::Receive()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "receive"; yang_parent_name = "prefix-sid-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::~Receive()
{
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_data() const
{
    return disable.is_set;
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Skeptical::Skeptical()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Skeptical::~Skeptical()
{
}

bool Native::Router::IsisContainer::Isis::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Router::IsisContainer::Isis::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Use::Use()
    :
    external_metrics{YType::empty, "external-metrics"}
{

    yang_name = "use"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Use::~Use()
{
}

bool Native::Router::IsisContainer::Isis::Use::has_data() const
{
    return external_metrics.is_set;
}

bool Native::Router::IsisContainer::Isis::Use::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metrics.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Use::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Use::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metrics.is_set || is_set(external_metrics.yfilter)) leaf_name_data.push_back(external_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Use::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Use::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Use::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metrics")
    {
        external_metrics = value;
        external_metrics.value_namespace = name_space;
        external_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Use::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metrics")
    {
        external_metrics.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Use::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metrics")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    check_ctrl_plane_failure{YType::empty, "check-ctrl-plane-failure"}
{

    yang_name = "bfd"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::IsisContainer::Isis::Bfd::~Bfd()
{
}

bool Native::Router::IsisContainer::Isis::Bfd::has_data() const
{
    return all_interfaces.is_set
	|| check_ctrl_plane_failure.is_set;
}

bool Native::Router::IsisContainer::Isis::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| ydk::is_set(check_ctrl_plane_failure.yfilter);
}

std::string Native::Router::IsisContainer::Isis::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::IsisContainer::Isis::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (check_ctrl_plane_failure.is_set || is_set(check_ctrl_plane_failure.yfilter)) leaf_name_data.push_back(check_ctrl_plane_failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::IsisContainer::Isis::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure = value;
        check_ctrl_plane_failure.value_namespace = name_space;
        check_ctrl_plane_failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "check-ctrl-plane-failure")
        return true;
    return false;
}

Native::Router::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    shutdown{YType::empty, "shutdown"},
    variance{YType::uint8, "variance"}
    	,
    passive_interface(std::make_shared<Native::Router::Eigrp::PassiveInterface>())
	,set_as_in_submode(std::make_shared<Native::Router::Eigrp::SetAsInSubmode>())
	,bfd(std::make_shared<Native::Router::Eigrp::Bfd>())
	,default_information(std::make_shared<Native::Router::Eigrp::DefaultInformation>())
	,default_metric(std::make_shared<Native::Router::Eigrp::DefaultMetric>())
	,distance(std::make_shared<Native::Router::Eigrp::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::DistributeList>())
	,eigrp(std::make_shared<Native::Router::Eigrp::Eigrp_>())
	,metric(std::make_shared<Native::Router::Eigrp::Metric>())
	,neighbor(std::make_shared<Native::Router::Eigrp::Neighbor>())
	,offset_list(std::make_shared<Native::Router::Eigrp::OffsetList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::Redistribute>())
	,summary_metric(std::make_shared<Native::Router::Eigrp::SummaryMetric>())
	,timers(std::make_shared<Native::Router::Eigrp::Timers>())
	,traffic_share(std::make_shared<Native::Router::Eigrp::TrafficShare>())
{
    passive_interface->parent = this;
    set_as_in_submode->parent = this;
    bfd->parent = this;
    default_information->parent = this;
    default_metric->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    eigrp->parent = this;
    metric->parent = this;
    neighbor->parent = this;
    offset_list->parent = this;
    redistribute->parent = this;
    summary_metric->parent = this;
    timers->parent = this;
    traffic_share->parent = this;

    yang_name = "eigrp"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Eigrp::~Eigrp()
{
}

bool Native::Router::Eigrp::has_data() const
{
    for (std::size_t index=0; index<address_family.size(); index++)
    {
        if(address_family[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return id.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| shutdown.is_set
	|| variance.is_set
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (offset_list !=  nullptr && offset_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (summary_metric !=  nullptr && summary_metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data());
}

bool Native::Router::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<address_family.size(); index++)
    {
        if(address_family[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (offset_list !=  nullptr && offset_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (summary_metric !=  nullptr && summary_metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation());
}

std::string Native::Router::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Eigrp::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "address-family")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily>();
        c->parent = this;
        address_family.push_back(c);
        return c;
    }

    if(child_yang_name == "af-interface")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AfInterface>();
        c->parent = this;
        af_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "set-as-in-submode")
    {
        if(set_as_in_submode == nullptr)
        {
            set_as_in_submode = std::make_shared<Native::Router::Eigrp::SetAsInSubmode>();
        }
        return set_as_in_submode;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Eigrp::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Eigrp::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Router::Eigrp::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Router::Eigrp::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "network")
    {
        auto c = std::make_shared<Native::Router::Eigrp::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "offset-list")
    {
        if(offset_list == nullptr)
        {
            offset_list = std::make_shared<Native::Router::Eigrp::OffsetList>();
        }
        return offset_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        if(summary_metric == nullptr)
        {
            summary_metric = std::make_shared<Native::Router::Eigrp::SummaryMetric>();
        }
        return summary_metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Eigrp::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Eigrp::TrafficShare>();
        }
        return traffic_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    count = 0;
    for (auto const & c : address_family)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : af_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(set_as_in_submode != nullptr)
    {
        children["set-as-in-submode"] = set_as_in_submode;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    count = 0;
    for (auto const & c : network)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(offset_list != nullptr)
    {
        children["offset-list"] = offset_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(summary_metric != nullptr)
    {
        children["summary-metric"] = summary_metric;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    return children;
}

void Native::Router::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface" || name == "address-family" || name == "af-interface" || name == "set-as-in-submode" || name == "bfd" || name == "default-information" || name == "default-metric" || name == "distance" || name == "distribute-list" || name == "eigrp" || name == "metric" || name == "neighbor" || name == "network" || name == "offset-list" || name == "redistribute" || name == "summary-metric" || name == "timers" || name == "traffic-share" || name == "id" || name == "auto-summary" || name == "maximum-paths" || name == "nsf" || name == "shutdown" || name == "variance")
        return true;
    return false;
}

Native::Router::Eigrp::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"},
    tunnel{YType::uint32, "Tunnel"},
    vlan{YType::uint16, "Vlan"},
    default_{YType::empty, "default"}
{

    yang_name = "passive-interface"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Eigrp::PassiveInterface::has_data() const
{
    return interface.is_set
	|| tunnel.is_set
	|| vlan.is_set
	|| default_.is_set;
}

bool Native::Router::Eigrp::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Router::Eigrp::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "Tunnel" || name == "Vlan" || name == "default")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AddressFamily()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "address-family"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Eigrp::AddressFamily::has_data() const
{
    for (std::size_t index=0; index<af_ip_list.size(); index++)
    {
        if(af_ip_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_ip_vrf_list.size(); index++)
    {
        if(af_ip_vrf_list[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool Native::Router::Eigrp::AddressFamily::has_operation() const
{
    for (std::size_t index=0; index<af_ip_list.size(); index++)
    {
        if(af_ip_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_ip_vrf_list.size(); index++)
    {
        if(af_ip_vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-ip-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList>();
        c->parent = this;
        af_ip_list.push_back(c);
        return c;
    }

    if(child_yang_name == "af-ip-vrf-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList>();
        c->parent = this;
        af_ip_vrf_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : af_ip_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : af_ip_vrf_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-ip-list" || name == "af-ip-vrf-list" || name == "type")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfIpList()
    :
    unicast_multicast{YType::enumeration, "unicast-multicast"},
    autonomous_system{YType::uint16, "autonomous-system"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    shutdown{YType::empty, "shutdown"},
    variance{YType::uint8, "variance"}
    	,
    set_as_in_submode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode>())
	,bfd(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd>())
	,default_information(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation>())
	,default_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric>())
	,distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList>())
	,eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_>())
	,metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Metric>())
	,neighbor(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor>())
	,offset_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute>())
	,summary_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric>())
	,timers(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers>())
	,traffic_share(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare>())
	,topology(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology>())
{
    set_as_in_submode->parent = this;
    bfd->parent = this;
    default_information->parent = this;
    default_metric->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    eigrp->parent = this;
    metric->parent = this;
    neighbor->parent = this;
    offset_list->parent = this;
    redistribute->parent = this;
    summary_metric->parent = this;
    timers->parent = this;
    traffic_share->parent = this;
    topology->parent = this;

    yang_name = "af-ip-list"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::~AfIpList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_data() const
{
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return unicast_multicast.is_set
	|| autonomous_system.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| shutdown.is_set
	|| variance.is_set
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (offset_list !=  nullptr && offset_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (summary_metric !=  nullptr && summary_metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (topology !=  nullptr && topology->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_operation() const
{
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unicast_multicast.yfilter)
	|| ydk::is_set(autonomous_system.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (offset_list !=  nullptr && offset_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (summary_metric !=  nullptr && summary_metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-ip-list" <<"[unicast-multicast='" <<unicast_multicast <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast_multicast.is_set || is_set(unicast_multicast.yfilter)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());
    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-interface")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface>();
        c->parent = this;
        af_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "set-as-in-submode")
    {
        if(set_as_in_submode == nullptr)
        {
            set_as_in_submode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode>();
        }
        return set_as_in_submode;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "network")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "offset-list")
    {
        if(offset_list == nullptr)
        {
            offset_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList>();
        }
        return offset_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        if(summary_metric == nullptr)
        {
            summary_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric>();
        }
        return summary_metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : af_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(set_as_in_submode != nullptr)
    {
        children["set-as-in-submode"] = set_as_in_submode;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    count = 0;
    for (auto const & c : network)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(offset_list != nullptr)
    {
        children["offset-list"] = offset_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(summary_metric != nullptr)
    {
        children["summary-metric"] = summary_metric;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
        unicast_multicast.value_namespace = name_space;
        unicast_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-multicast")
    {
        unicast_multicast.yfilter = yfilter;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-interface" || name == "set-as-in-submode" || name == "bfd" || name == "default-information" || name == "default-metric" || name == "distance" || name == "distribute-list" || name == "eigrp" || name == "metric" || name == "neighbor" || name == "network" || name == "offset-list" || name == "redistribute" || name == "summary-metric" || name == "timers" || name == "traffic-share" || name == "topology" || name == "unicast-multicast" || name == "autonomous-system" || name == "auto-summary" || name == "maximum-paths" || name == "nsf" || name == "shutdown" || name == "variance")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::AfInterface()
    :
    name{YType::str, "name"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    hello_interval{YType::uint16, "hello-interval"},
    hold_time{YType::uint16, "hold-time"},
    passive_interface{YType::boolean, "passive-interface"},
    split_horizon{YType::boolean, "split-horizon"}
    	,
    stub_site(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite>())
	,authentication(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication>())
	,summary_address(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress>())
{
    stub_site->parent = this;
    authentication->parent = this;
    summary_address->parent = this;

    yang_name = "af-interface"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::~AfInterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_data() const
{
    return name.is_set
	|| bandwidth_percent.is_set
	|| hello_interval.is_set
	|| hold_time.is_set
	|| passive_interface.is_set
	|| split_horizon.is_set
	|| (stub_site !=  nullptr && stub_site->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bandwidth_percent.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (stub_site !=  nullptr && stub_site->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.yfilter)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub-site")
    {
        if(stub_site == nullptr)
        {
            stub_site = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite>();
        }
        return stub_site;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress>();
        }
        return summary_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stub_site != nullptr)
    {
        children["stub-site"] = stub_site;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
        bandwidth_percent.value_namespace = name_space;
        bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub-site" || name == "authentication" || name == "summary-address" || name == "name" || name == "bandwidth-percent" || name == "hello-interval" || name == "hold-time" || name == "passive-interface" || name == "split-horizon")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::StubSite()
    :
    wan_interface{YType::empty, "wan-interface"}
{

    yang_name = "stub-site"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::~StubSite()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_data() const
{
    return wan_interface.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wan_interface.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wan_interface.is_set || is_set(wan_interface.yfilter)) leaf_name_data.push_back(wan_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wan-interface")
    {
        wan_interface = value;
        wan_interface.value_namespace = name_space;
        wan_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wan-interface")
    {
        wan_interface.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wan-interface")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::~Authentication()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"}
    	,
    hmac_sha_256(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256>())
{
    hmac_sha_256->parent = this;

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::~Mode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac-sha-256")
    {
        if(hmac_sha_256 == nullptr)
        {
            hmac_sha_256 = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256>();
        }
        return hmac_sha_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hmac_sha_256 != nullptr)
    {
        children["hmac-sha-256"] = hmac_sha_256;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha-256" || name == "md5")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::HmacSha256()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "hmac-sha-256"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::~HmacSha256()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac-sha-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::SummaryAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "summary-address"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::SetAsInSubmode()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{

    yang_name = "set-as-in-submode"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::~SetAsInSubmode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_data() const
{
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-as-in-submode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autonomous-system")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
    	,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface>())
{
    interface->parent = this;

    yang_name = "bfd"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::~Bfd()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_data() const
{
    return all_interfaces.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "all-interfaces")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::DefaultInformation()
    :
    in(nullptr) // presence node
	,out(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::In()
    :
    sa_num{YType::uint16, "sa-num"},
    sa_name{YType::str, "sa-name"}
{

    yang_name = "in"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_data() const
{
    return sa_num.is_set
	|| sa_name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_num.yfilter)
	|| ydk::is_set(sa_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_num.is_set || is_set(sa_num.yfilter)) leaf_name_data.push_back(sa_num.get_name_leafdata());
    if (sa_name.is_set || is_set(sa_name.yfilter)) leaf_name_data.push_back(sa_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-num")
    {
        sa_num = value;
        sa_num.value_namespace = name_space;
        sa_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-name")
    {
        sa_name = value;
        sa_name.value_namespace = name_space;
        sa_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-num")
    {
        sa_num.yfilter = yfilter;
    }
    if(value_path == "sa-name")
    {
        sa_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-num" || name == "sa-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::Out()
    :
    sa_out_num{YType::uint16, "sa-out-num"},
    sa_out_name{YType::str, "sa-out-name"}
{

    yang_name = "out"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_data() const
{
    return sa_out_num.is_set
	|| sa_out_name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_out_num.yfilter)
	|| ydk::is_set(sa_out_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_out_num.is_set || is_set(sa_out_num.yfilter)) leaf_name_data.push_back(sa_out_num.get_name_leafdata());
    if (sa_out_name.is_set || is_set(sa_out_name.yfilter)) leaf_name_data.push_back(sa_out_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num = value;
        sa_out_num.value_namespace = name_space;
        sa_out_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name = value;
        sa_out_name.value_namespace = name_space;
        sa_out_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num.yfilter = yfilter;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-out-num" || name == "sa-out-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DefaultMetric()
{

    yang_name = "default-metric"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::~DefaultMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_data() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr>();
        c->parent = this;
        dm_rdr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dm_rdr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr()
    :
    dm_rdr{YType::uint32, "dm-rdr"}
{

    yang_name = "dm-rdr"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::~DmRdr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_data() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_data())
            return true;
    }
    return dm_rdr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr" <<"[dm-rdr='" <<dm_rdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.yfilter)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr0")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0>();
        c->parent = this;
        dm_rdr0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dm_rdr0)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
        dm_rdr.value_namespace = name_space;
        dm_rdr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::DmRdr0()
    :
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"}
{

    yang_name = "dm-rdr0"; yang_parent_name = "dm-rdr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::~DmRdr0()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_data() const
{
    return dm_rdr0.is_set
	|| dm_rdr_pct.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr0.yfilter)
	|| ydk::is_set(dm_rdr_pct.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr0" <<"[dm-rdr0='" <<dm_rdr0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr0.is_set || is_set(dm_rdr0.yfilter)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.yfilter)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
        dm_rdr0.value_namespace = name_space;
        dm_rdr0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
        dm_rdr_pct.value_namespace = name_space;
        dm_rdr_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0.yfilter = yfilter;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr-pct")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_data() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_data())
            return true;
    }
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_operation() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rad-dis")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis>();
        c->parent = this;
        rad_dis.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rad_dis)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rad-dis" || name == "eigrp")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::RadDis()
    :
    rad_dis{YType::uint8, "rad-dis"}
{

    yang_name = "rad-dis"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::~RadDis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return rad_dis.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rad_dis.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rad-dis" <<"[rad-dis='" <<rad_dis <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rad_dis.is_set || is_set(rad_dis.yfilter)) leaf_name_data.push_back(rad_dis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rad-dis")
    {
        rad_dis = value;
        rad_dis.value_namespace = name_space;
        rad_dis.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rad-dis")
    {
        rad_dis.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "rad-dis")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    ipv40{YType::str, "ipv40"}
{

    yang_name = "ipv4"; yang_parent_name = "rad-dis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_data() const
{
    return ipv4.is_set
	|| ipv40.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv40.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv40.is_set || is_set(ipv40.yfilter)) leaf_name_data.push_back(ipv40.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv40")
    {
        ipv40 = value;
        ipv40.value_namespace = name_space;
        ipv40.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv40")
    {
        ipv40.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv40")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::Eigrp_()
{

    yang_name = "eigrp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "di-rt")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt>();
        c->parent = this;
        di_rt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : di_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::DiRt()
    :
    di_rt{YType::uint8, "di-rt"},
    di_rt0{YType::uint8, "di-rt0"}
{

    yang_name = "di-rt"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::~DiRt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_data() const
{
    return di_rt.is_set
	|| di_rt0.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(di_rt.yfilter)
	|| ydk::is_set(di_rt0.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "di-rt" <<"[di-rt='" <<di_rt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (di_rt.is_set || is_set(di_rt.yfilter)) leaf_name_data.push_back(di_rt.get_name_leafdata());
    if (di_rt0.is_set || is_set(di_rt0.yfilter)) leaf_name_data.push_back(di_rt0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "di-rt")
    {
        di_rt = value;
        di_rt.value_namespace = name_space;
        di_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-rt0")
    {
        di_rt0 = value;
        di_rt0.value_namespace = name_space;
        di_rt0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "di-rt")
    {
        di_rt.yfilter = yfilter;
    }
    if(value_path == "di-rt0")
    {
        di_rt0.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt" || name == "di-rt0")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::DistributeList()
    :
    gateway(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway>())
	,prefix(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix>())
	,route_map(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap>())
{
    gateway->parent = this;
    prefix->parent = this;
    route_map->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_data() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_data())
            return true;
    }
    return (gateway !=  nullptr && gateway->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eig-filt")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt>();
        c->parent = this;
        eig_filt.push_back(c);
        return c;
    }

    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : eig_filt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eig-filt" || name == "gateway" || name == "prefix" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::EigFilt()
    :
    eig_filt{YType::str, "eig-filt"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{

    yang_name = "eig-filt"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::~EigFilt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_data() const
{
    return eig_filt.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eig_filt.yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eig-filt" <<"[eig-filt='" <<eig_filt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eig_filt.is_set || is_set(eig_filt.yfilter)) leaf_name_data.push_back(eig_filt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eig-filt")
    {
        eig_filt = value;
        eig_filt.value_namespace = name_space;
        eig_filt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eig-filt")
    {
        eig_filt.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "eig-filt")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::In()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "in"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::Out()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "out"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::Gateway()
{

    yang_name = "gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::~Gateway()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_data() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_operation() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList>();
        c->parent = this;
        gw_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : gw_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::GwList()
    :
    gw_list{YType::str, "gw-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "gw-list"; yang_parent_name = "gateway"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::~GwList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_data() const
{
    return gw_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gw_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-list" <<"[gw-list='" <<gw_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gw_list.is_set || is_set(gw_list.yfilter)) leaf_name_data.push_back(gw_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gw-list")
    {
        gw_list = value;
        gw_list.value_namespace = name_space;
        gw_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gw-list")
    {
        gw_list.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::Prefix()
{

    yang_name = "prefix"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::~Prefix()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_data() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_operation() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pl-name")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName>();
        c->parent = this;
        pl_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pl_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::PlName()
    :
    pl_name{YType::str, "pl-name"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "pl-name"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::~PlName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_data() const
{
    return pl_name.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pl_name.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pl-name" <<"[pl-name='" <<pl_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pl_name.is_set || is_set(pl_name.yfilter)) leaf_name_data.push_back(pl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pl-name")
    {
        pl_name = value;
        pl_name.value_namespace = name_space;
        pl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pl-name")
    {
        pl_name.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name" || name == "gateway" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RouteMap()
{

    yang_name = "route-map"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_data() const
{
    for (std::size_t index=0; index<rmap_name.size(); index++)
    {
        if(rmap_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<rmap_name.size(); index++)
    {
        if(rmap_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rmap-name")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName>();
        c->parent = this;
        rmap_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rmap_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmap-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::RmapName()
    :
    rmap_name{YType::str, "rmap-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "rmap-name"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::~RmapName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_data() const
{
    return rmap_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rmap_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmap-name" <<"[rmap-name='" <<rmap_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmap_name.is_set || is_set(rmap_name.yfilter)) leaf_name_data.push_back(rmap_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rmap-name")
    {
        rmap_name = value;
        rmap_name.value_namespace = name_space;
        rmap_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rmap-name")
    {
        rmap_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmap-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Eigrp_()
    :
    router_id{YType::str, "router-id"},
    stub_site{YType::str, "stub-site"}
    	,
    stub(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_data() const
{
    return router_id.is_set
	|| stub_site.is_set
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(stub_site.yfilter)
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (stub_site.is_set || is_set(stub_site.yfilter)) leaf_name_data.push_back(stub_site.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub>();
        }
        return stub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stub != nullptr)
    {
        children["stub"] = stub;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-site")
    {
        stub_site = value;
        stub_site.value_namespace = name_space;
        stub_site.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "stub-site")
    {
        stub_site.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub" || name == "router-id" || name == "stub-site")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::Stub()
    :
    connected{YType::empty, "connected"},
    summary{YType::empty, "summary"},
    redistributed{YType::empty, "redistributed"},
    leak_map{YType::str, "leak-map"},
    receive_only{YType::empty, "receive-only"},
    static_{YType::empty, "static"}
{

    yang_name = "stub"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::~Stub()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_data() const
{
    return connected.is_set
	|| summary.is_set
	|| redistributed.is_set
	|| leak_map.is_set
	|| receive_only.is_set
	|| static_.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(summary.yfilter)
	|| ydk::is_set(redistributed.yfilter)
	|| ydk::is_set(leak_map.yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (summary.is_set || is_set(summary.yfilter)) leaf_name_data.push_back(summary.get_name_leafdata());
    if (redistributed.is_set || is_set(redistributed.yfilter)) leaf_name_data.push_back(redistributed.get_name_leafdata());
    if (leak_map.is_set || is_set(leak_map.yfilter)) leaf_name_data.push_back(leak_map.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary")
    {
        summary = value;
        summary.value_namespace = name_space;
        summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistributed")
    {
        redistributed = value;
        redistributed.value_namespace = name_space;
        redistributed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leak-map")
    {
        leak_map = value;
        leak_map.value_namespace = name_space;
        leak_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "summary")
    {
        summary.yfilter = yfilter;
    }
    if(value_path == "redistributed")
    {
        redistributed.yfilter = yfilter;
    }
    if(value_path == "leak-map")
    {
        leak_map.yfilter = yfilter;
    }
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "summary" || name == "redistributed" || name == "leak-map" || name == "receive-only" || name == "static")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Metric::Metric()
    :
    maximum_hops{YType::uint8, "maximum-hops"},
    weights{YType::uint8, "weights"}
{

    yang_name = "metric"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_data() const
{
    return maximum_hops.is_set
	|| weights.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_hops.yfilter)
	|| ydk::is_set(weights.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_hops.is_set || is_set(maximum_hops.yfilter)) leaf_name_data.push_back(maximum_hops.get_name_leafdata());
    if (weights.is_set || is_set(weights.yfilter)) leaf_name_data.push_back(weights.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops = value;
        maximum_hops.value_namespace = name_space;
        maximum_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weights")
    {
        weights = value;
        weights.value_namespace = name_space;
        weights.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops.yfilter = yfilter;
    }
    if(value_path == "weights")
    {
        weights.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-hops" || name == "weights")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Neighbor()
{

    yang_name = "neighbor"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::~Neighbor()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
    	,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface>())
{
    interface->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_data() const
{
    return ipv4.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Network::Network()
    :
    number{YType::str, "number"},
    wild_card{YType::str, "wild-card"}
{

    yang_name = "network"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Network::~Network()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Network::has_data() const
{
    return number.is_set
	|| wild_card.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(wild_card.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (wild_card.is_set || is_set(wild_card.yfilter)) leaf_name_data.push_back(wild_card.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wild-card")
    {
        wild_card = value;
        wild_card.value_namespace = name_space;
        wild_card.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "wild-card")
    {
        wild_card.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "wild-card")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OffsetList()
{

    yang_name = "offset-list"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::~OffsetList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::has_data() const
{
    for (std::size_t index=0; index<nsr_list.size(); index++)
    {
        if(nsr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.size(); index++)
    {
        if(ol_acl[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::has_operation() const
{
    for (std::size_t index=0; index<nsr_list.size(); index++)
    {
        if(nsr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.size(); index++)
    {
        if(ol_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList>();
        c->parent = this;
        nsr_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ol-acl")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl>();
        c->parent = this;
        ol_acl.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ol_acl)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-list" || name == "ol-acl")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::NsrList()
    :
    nsr_list{YType::uint16, "nsr-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "nsr-list"; yang_parent_name = "offset-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::~NsrList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::has_data() const
{
    return nsr_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-list" <<"[nsr-list='" <<nsr_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_list.is_set || is_set(nsr_list.yfilter)) leaf_name_data.push_back(nsr_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-list")
    {
        nsr_list = value;
        nsr_list.value_namespace = name_space;
        nsr_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-list")
    {
        nsr_list.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::OlAcl()
    :
    ol_acl{YType::str, "ol-acl"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ol-acl"; yang_parent_name = "offset-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::~OlAcl()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::has_data() const
{
    return ol_acl.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ol_acl.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ol-acl" <<"[ol-acl='" <<ol_acl <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ol_acl.is_set || is_set(ol_acl.yfilter)) leaf_name_data.push_back(ol_acl.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ol-acl")
    {
        ol_acl = value;
        ol_acl.value_namespace = name_space;
        ol_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ol-acl")
    {
        ol_acl.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ol-acl" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Redistribute()
    :
    eigrp{YType::uint16, "eigrp"},
    ospf{YType::uint16, "ospf"}
    	,
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
	,vrf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf>())
{
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return eigrp.is_set
	|| ospf.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "isis" || name == "lisp" || name == "mobile" || name == "odr" || name == "rip" || name == "static" || name == "vrf" || name == "eigrp" || name == "ospf")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Bgp()
    :
    rdr_as{YType::str, "rdr-as"},
    route_map{YType::str, "route-map"},
    rd_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
    	,
    metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric>())
{
    metric->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::has_data() const
{
    return rdr_as.is_set
	|| route_map.is_set
	|| rd_lesser_1_period_0_xx_period_yy_greater_.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rdr_as.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rd_lesser_1_period_0_xx_period_yy_greater_.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[rdr-as='" <<rdr_as <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rdr_as.is_set || is_set(rdr_as.yfilter)) leaf_name_data.push_back(rdr_as.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rd_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(rd_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(rd_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rdr-as")
    {
        rdr_as = value;
        rdr_as.value_namespace = name_space;
        rdr_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_ = value;
        rd_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        rd_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rdr-as")
    {
        rdr_as.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "rdr-as" || name == "route-map" || name == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::Metric()
    :
    bandwith{YType::uint32, "bandwith"},
    delay{YType::uint32, "delay"},
    reliability{YType::uint8, "reliability"},
    effective{YType::uint8, "Effective"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "metric"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::has_data() const
{
    return bandwith.is_set
	|| delay.is_set
	|| reliability.is_set
	|| effective.is_set
	|| mtu.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwith.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(effective.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwith.is_set || is_set(bandwith.yfilter)) leaf_name_data.push_back(bandwith.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (effective.is_set || is_set(effective.yfilter)) leaf_name_data.push_back(effective.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwith")
    {
        bandwith = value;
        bandwith.value_namespace = name_space;
        bandwith.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Effective")
    {
        effective = value;
        effective.value_namespace = name_space;
        effective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwith")
    {
        bandwith.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "Effective")
    {
        effective.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwith" || name == "delay" || name == "reliability" || name == "Effective" || name == "mtu")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::Connected()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::Isis()
    :
    is_tag{YType::str, "is-tag"},
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::has_data() const
{
    return is_tag.is_set
	|| level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_tag.yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_1_2.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_tag.is_set || is_set(is_tag.yfilter)) leaf_name_data.push_back(is_tag.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.yfilter)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-tag")
    {
        is_tag = value;
        is_tag.value_namespace = name_space;
        is_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
        level_1_2.value_namespace = name_space;
        level_1_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-tag")
    {
        is_tag.yfilter = yfilter;
    }
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-1-2")
    {
        level_1_2.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-tag" || name == "level-1" || name == "level-1-2" || name == "level-2" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::Lisp()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::Mobile()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::Odr()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::Rip()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::Static()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::~Static()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::Vrf()
    :
    name{YType::str, "name"},
    global{YType::empty, "global"}
{

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::has_data() const
{
    return name.is_set
	|| global.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "global")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::SummaryMetric()
    :
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
{

    yang_name = "summary-metric"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::~SummaryMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_period_b_period_c_period_d_slash_nn.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.yfilter)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
        a_period_b_period_c_period_d_slash_nn.value_namespace = name_space;
        a_period_b_period_c_period_d_slash_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4"; yang_parent_name = "summary-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Timers()
    :
    active_time(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime>())
	,graceful_restart(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart>())
	,nsf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf>())
{
    active_time->parent = this;
    graceful_restart->parent = this;
    nsf->parent = this;

    yang_name = "timers"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::~Timers()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::has_data() const
{
    return (active_time !=  nullptr && active_time->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (nsf !=  nullptr && nsf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (active_time !=  nullptr && active_time->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-time")
    {
        if(active_time == nullptr)
        {
            active_time = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime>();
        }
        return active_time;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf>();
        }
        return nsf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(active_time != nullptr)
    {
        children["active-time"] = active_time;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-time" || name == "graceful-restart" || name == "nsf")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::ActiveTime()
    :
    atimer{YType::uint16, "atimer"},
    disabled{YType::empty, "disabled"}
{

    yang_name = "active-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::~ActiveTime()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::has_data() const
{
    return atimer.is_set
	|| disabled.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atimer.yfilter)
	|| ydk::is_set(disabled.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atimer.is_set || is_set(atimer.yfilter)) leaf_name_data.push_back(atimer.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atimer")
    {
        atimer = value;
        atimer.value_namespace = name_space;
        atimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atimer")
    {
        atimer.yfilter = yfilter;
    }
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atimer" || name == "disabled")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::GracefulRestart()
    :
    purge_time{YType::empty, "purge-time"}
{

    yang_name = "graceful-restart"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::has_data() const
{
    return purge_time.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(purge_time.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "purge-time")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::Nsf()
    :
    converge{YType::empty, "converge"},
    signal{YType::empty, "signal"}
{

    yang_name = "nsf"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::~Nsf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::has_data() const
{
    return converge.is_set
	|| signal.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(converge.yfilter)
	|| ydk::is_set(signal.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (converge.is_set || is_set(converge.yfilter)) leaf_name_data.push_back(converge.get_name_leafdata());
    if (signal.is_set || is_set(signal.yfilter)) leaf_name_data.push_back(signal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "converge")
    {
        converge = value;
        converge.value_namespace = name_space;
        converge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal")
    {
        signal = value;
        signal.value_namespace = name_space;
        signal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "converge")
    {
        converge.yfilter = yfilter;
    }
    if(value_path == "signal")
    {
        signal.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "converge" || name == "signal")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::TrafficShare()
    :
    balanced{YType::empty, "balanced"}
    	,
    min(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::has_data() const
{
    return balanced.is_set
	|| (min !=  nullptr && min->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(balanced.yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (balanced.is_set || is_set(balanced.yfilter)) leaf_name_data.push_back(balanced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "balanced")
    {
        balanced = value;
        balanced.value_namespace = name_space;
        balanced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "balanced")
    {
        balanced.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "balanced")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::~Min()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Topology()
    :
    base(nullptr) // presence node
{

    yang_name = "topology"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::~Topology()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::has_data() const
{
    return (base !=  nullptr && base->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Base()
    :
    distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute>())
{
    distance->parent = this;
    distribute_list->parent = this;
    redistribute->parent = this;

    yang_name = "base"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::~Base()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::has_data() const
{
    for (std::size_t index=0; index<summary_metric.size(); index++)
    {
        if(summary_metric[index]->has_data())
            return true;
    }
    return (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::has_operation() const
{
    for (std::size_t index=0; index<summary_metric.size(); index++)
    {
        if(summary_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric>();
        c->parent = this;
        summary_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    count = 0;
    for (auto const & c : summary_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "distribute-list" || name == "redistribute" || name == "summary-metric")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::has_data() const
{
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::has_operation() const
{
    return is_set(yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::Eigrp_()
{

    yang_name = "eigrp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList>();
        c->parent = this;
        distance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : distance_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::DistanceList()
    :
    internal_route{YType::uint8, "internal-route"},
    external_route{YType::uint8, "external-route"}
{

    yang_name = "distance-list"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::~DistanceList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::has_data() const
{
    return internal_route.is_set
	|| external_route.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_route.yfilter)
	|| ydk::is_set(external_route.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance-list" <<"[internal-route='" <<internal_route <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_route.is_set || is_set(internal_route.yfilter)) leaf_name_data.push_back(internal_route.get_name_leafdata());
    if (external_route.is_set || is_set(external_route.yfilter)) leaf_name_data.push_back(external_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-route")
    {
        internal_route = value;
        internal_route.value_namespace = name_space;
        internal_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route")
    {
        external_route = value;
        external_route.value_namespace = name_space;
        external_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-route")
    {
        internal_route.yfilter = yfilter;
    }
    if(value_path == "external-route")
    {
        external_route.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-route" || name == "external-route")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::DistributeList()
{

    yang_name = "distribute-list"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefix_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : route_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::PrefixList()
    :
    prefix_list{YType::str, "prefix-list"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "prefix-list"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::has_data() const
{
    return prefix_list.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix-list='" <<prefix_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "gateway" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::RouteMap()
    :
    name{YType::str, "name"},
    in{YType::str, "in"},
    out{YType::str, "out"}
{

    yang_name = "route-map"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::has_data() const
{
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Redistribute()
    :
    connected{YType::empty, "connected"}
    	,
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_>())
	,ospf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf>())
	,static_(nullptr) // presence node
{
    eigrp->parent = this;
    ospf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::has_data() const
{
    return connected.is_set
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "ospf" || name == "static" || name == "connected")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::Eigrp_()
{

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<as_list.size(); index++)
    {
        if(as_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<as_list.size(); index++)
    {
        if(as_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList>();
        c->parent = this;
        as_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : as_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::AsList()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{

    yang_name = "as-list"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::~AsList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::has_data() const
{
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list" <<"[autonomous-system='" <<autonomous_system <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autonomous-system")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::Ospf()
{

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::has_data() const
{
    for (std::size_t index=0; index<pid_list.size(); index++)
    {
        if(pid_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<pid_list.size(); index++)
    {
        if(pid_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pid-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList>();
        c->parent = this;
        pid_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pid_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::PidList()
    :
    process_id{YType::uint16, "process-id"}
{

    yang_name = "pid-list"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::~PidList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::has_data() const
{
    return process_id.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pid-list" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-id")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::Static()
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::~Static()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::has_data() const
{
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::SummaryMetric()
    :
    ipv4_addr_slash_prefix_len{YType::str, "ipv4-addr-slash-prefix-len"},
    distance{YType::uint8, "distance"}
    	,
    metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric>())
{
    metric->parent = this;

    yang_name = "summary-metric"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::~SummaryMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::has_data() const
{
    return ipv4_addr_slash_prefix_len.is_set
	|| distance.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr_slash_prefix_len.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-metric" <<"[ipv4-addr-slash-prefix-len='" <<ipv4_addr_slash_prefix_len <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr_slash_prefix_len.is_set || is_set(ipv4_addr_slash_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_addr_slash_prefix_len.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr-slash-prefix-len")
    {
        ipv4_addr_slash_prefix_len = value;
        ipv4_addr_slash_prefix_len.value_namespace = name_space;
        ipv4_addr_slash_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr-slash-prefix-len")
    {
        ipv4_addr_slash_prefix_len.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "ipv4-addr-slash-prefix-len" || name == "distance")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::Metric()
    :
    bandwidth_metric{YType::uint32, "bandwidth-metric"},
    delay_metric{YType::uint32, "delay-metric"},
    reliability_metric{YType::uint8, "reliability-metric"},
    effective_bandwidth_metric{YType::uint8, "effective-bandwidth-metric"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "metric"; yang_parent_name = "summary-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::has_data() const
{
    return bandwidth_metric.is_set
	|| delay_metric.is_set
	|| reliability_metric.is_set
	|| effective_bandwidth_metric.is_set
	|| mtu.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_metric.yfilter)
	|| ydk::is_set(delay_metric.yfilter)
	|| ydk::is_set(reliability_metric.yfilter)
	|| ydk::is_set(effective_bandwidth_metric.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_metric.is_set || is_set(bandwidth_metric.yfilter)) leaf_name_data.push_back(bandwidth_metric.get_name_leafdata());
    if (delay_metric.is_set || is_set(delay_metric.yfilter)) leaf_name_data.push_back(delay_metric.get_name_leafdata());
    if (reliability_metric.is_set || is_set(reliability_metric.yfilter)) leaf_name_data.push_back(reliability_metric.get_name_leafdata());
    if (effective_bandwidth_metric.is_set || is_set(effective_bandwidth_metric.yfilter)) leaf_name_data.push_back(effective_bandwidth_metric.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-metric")
    {
        bandwidth_metric = value;
        bandwidth_metric.value_namespace = name_space;
        bandwidth_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-metric")
    {
        delay_metric = value;
        delay_metric.value_namespace = name_space;
        delay_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability-metric")
    {
        reliability_metric = value;
        reliability_metric.value_namespace = name_space;
        reliability_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth-metric")
    {
        effective_bandwidth_metric = value;
        effective_bandwidth_metric.value_namespace = name_space;
        effective_bandwidth_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-metric")
    {
        bandwidth_metric.yfilter = yfilter;
    }
    if(value_path == "delay-metric")
    {
        delay_metric.yfilter = yfilter;
    }
    if(value_path == "reliability-metric")
    {
        reliability_metric.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth-metric")
    {
        effective_bandwidth_metric.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-metric" || name == "delay-metric" || name == "reliability-metric" || name == "effective-bandwidth-metric" || name == "mtu")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfIpVrfList()
    :
    vrf{YType::str, "vrf"},
    unicast_multicast{YType::enumeration, "unicast-multicast"},
    autonomous_system{YType::uint16, "autonomous-system"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    shutdown{YType::empty, "shutdown"},
    variance{YType::uint8, "variance"}
    	,
    set_as_in_submode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode>())
	,bfd(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd>())
	,default_information(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation>())
	,default_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric>())
	,distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList>())
	,eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_>())
	,metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric>())
	,neighbor(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor>())
	,offset_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute>())
	,summary_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric>())
	,timers(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers>())
	,traffic_share(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare>())
	,topology(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology>())
{
    set_as_in_submode->parent = this;
    bfd->parent = this;
    default_information->parent = this;
    default_metric->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    eigrp->parent = this;
    metric->parent = this;
    neighbor->parent = this;
    offset_list->parent = this;
    redistribute->parent = this;
    summary_metric->parent = this;
    timers->parent = this;
    traffic_share->parent = this;
    topology->parent = this;

    yang_name = "af-ip-vrf-list"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::~AfIpVrfList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::has_data() const
{
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return vrf.is_set
	|| unicast_multicast.is_set
	|| autonomous_system.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| shutdown.is_set
	|| variance.is_set
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (offset_list !=  nullptr && offset_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (summary_metric !=  nullptr && summary_metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (topology !=  nullptr && topology->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::has_operation() const
{
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(unicast_multicast.yfilter)
	|| ydk::is_set(autonomous_system.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (offset_list !=  nullptr && offset_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (summary_metric !=  nullptr && summary_metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-ip-vrf-list" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (unicast_multicast.is_set || is_set(unicast_multicast.yfilter)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());
    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-interface")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface>();
        c->parent = this;
        af_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "set-as-in-submode")
    {
        if(set_as_in_submode == nullptr)
        {
            set_as_in_submode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode>();
        }
        return set_as_in_submode;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "network")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "offset-list")
    {
        if(offset_list == nullptr)
        {
            offset_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList>();
        }
        return offset_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        if(summary_metric == nullptr)
        {
            summary_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric>();
        }
        return summary_metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : af_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(set_as_in_submode != nullptr)
    {
        children["set-as-in-submode"] = set_as_in_submode;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    count = 0;
    for (auto const & c : network)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(offset_list != nullptr)
    {
        children["offset-list"] = offset_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(summary_metric != nullptr)
    {
        children["summary-metric"] = summary_metric;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
        unicast_multicast.value_namespace = name_space;
        unicast_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "unicast-multicast")
    {
        unicast_multicast.yfilter = yfilter;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-interface" || name == "set-as-in-submode" || name == "bfd" || name == "default-information" || name == "default-metric" || name == "distance" || name == "distribute-list" || name == "eigrp" || name == "metric" || name == "neighbor" || name == "network" || name == "offset-list" || name == "redistribute" || name == "summary-metric" || name == "timers" || name == "traffic-share" || name == "topology" || name == "vrf" || name == "unicast-multicast" || name == "autonomous-system" || name == "auto-summary" || name == "maximum-paths" || name == "nsf" || name == "shutdown" || name == "variance")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::AfInterface()
    :
    name{YType::str, "name"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    hello_interval{YType::uint16, "hello-interval"},
    hold_time{YType::uint16, "hold-time"},
    passive_interface{YType::boolean, "passive-interface"},
    split_horizon{YType::boolean, "split-horizon"}
    	,
    stub_site(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite>())
	,authentication(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication>())
	,summary_address(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress>())
{
    stub_site->parent = this;
    authentication->parent = this;
    summary_address->parent = this;

    yang_name = "af-interface"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::~AfInterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::has_data() const
{
    return name.is_set
	|| bandwidth_percent.is_set
	|| hello_interval.is_set
	|| hold_time.is_set
	|| passive_interface.is_set
	|| split_horizon.is_set
	|| (stub_site !=  nullptr && stub_site->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bandwidth_percent.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (stub_site !=  nullptr && stub_site->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.yfilter)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub-site")
    {
        if(stub_site == nullptr)
        {
            stub_site = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite>();
        }
        return stub_site;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress>();
        }
        return summary_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stub_site != nullptr)
    {
        children["stub-site"] = stub_site;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
        bandwidth_percent.value_namespace = name_space;
        bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub-site" || name == "authentication" || name == "summary-address" || name == "name" || name == "bandwidth-percent" || name == "hello-interval" || name == "hold-time" || name == "passive-interface" || name == "split-horizon")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::StubSite()
    :
    wan_interface{YType::empty, "wan-interface"}
{

    yang_name = "stub-site"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::~StubSite()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::has_data() const
{
    return wan_interface.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wan_interface.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wan_interface.is_set || is_set(wan_interface.yfilter)) leaf_name_data.push_back(wan_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wan-interface")
    {
        wan_interface = value;
        wan_interface.value_namespace = name_space;
        wan_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wan-interface")
    {
        wan_interface.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wan-interface")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::~Authentication()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"}
    	,
    hmac_sha_256(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256>())
{
    hmac_sha_256->parent = this;

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::~Mode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac-sha-256")
    {
        if(hmac_sha_256 == nullptr)
        {
            hmac_sha_256 = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256>();
        }
        return hmac_sha_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hmac_sha_256 != nullptr)
    {
        children["hmac-sha-256"] = hmac_sha_256;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha-256" || name == "md5")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::HmacSha256()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "hmac-sha-256"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::~HmacSha256()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::has_data() const
{
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac-sha-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::SummaryAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "summary-address"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::SetAsInSubmode()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{

    yang_name = "set-as-in-submode"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::~SetAsInSubmode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::has_data() const
{
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-as-in-submode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autonomous-system")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
    	,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface>())
{
    interface->parent = this;

    yang_name = "bfd"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::~Bfd()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::has_data() const
{
    return all_interfaces.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "all-interfaces")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::DefaultInformation()
    :
    in(nullptr) // presence node
	,out(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::In()
    :
    sa_num{YType::uint16, "sa-num"},
    sa_name{YType::str, "sa-name"}
{

    yang_name = "in"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::has_data() const
{
    return sa_num.is_set
	|| sa_name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_num.yfilter)
	|| ydk::is_set(sa_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_num.is_set || is_set(sa_num.yfilter)) leaf_name_data.push_back(sa_num.get_name_leafdata());
    if (sa_name.is_set || is_set(sa_name.yfilter)) leaf_name_data.push_back(sa_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-num")
    {
        sa_num = value;
        sa_num.value_namespace = name_space;
        sa_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-name")
    {
        sa_name = value;
        sa_name.value_namespace = name_space;
        sa_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-num")
    {
        sa_num.yfilter = yfilter;
    }
    if(value_path == "sa-name")
    {
        sa_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-num" || name == "sa-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::Out()
    :
    sa_out_num{YType::uint16, "sa-out-num"},
    sa_out_name{YType::str, "sa-out-name"}
{

    yang_name = "out"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::has_data() const
{
    return sa_out_num.is_set
	|| sa_out_name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_out_num.yfilter)
	|| ydk::is_set(sa_out_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_out_num.is_set || is_set(sa_out_num.yfilter)) leaf_name_data.push_back(sa_out_num.get_name_leafdata());
    if (sa_out_name.is_set || is_set(sa_out_name.yfilter)) leaf_name_data.push_back(sa_out_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num = value;
        sa_out_num.value_namespace = name_space;
        sa_out_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name = value;
        sa_out_name.value_namespace = name_space;
        sa_out_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num.yfilter = yfilter;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-out-num" || name == "sa-out-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DefaultMetric()
{

    yang_name = "default-metric"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::~DefaultMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::has_data() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr>();
        c->parent = this;
        dm_rdr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dm_rdr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr()
    :
    dm_rdr{YType::uint32, "dm-rdr"}
{

    yang_name = "dm-rdr"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::~DmRdr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::has_data() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_data())
            return true;
    }
    return dm_rdr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr" <<"[dm-rdr='" <<dm_rdr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.yfilter)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr0")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0>();
        c->parent = this;
        dm_rdr0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dm_rdr0)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
        dm_rdr.value_namespace = name_space;
        dm_rdr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::DmRdr0()
    :
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"}
{

    yang_name = "dm-rdr0"; yang_parent_name = "dm-rdr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::~DmRdr0()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::has_data() const
{
    return dm_rdr0.is_set
	|| dm_rdr_pct.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr0.yfilter)
	|| ydk::is_set(dm_rdr_pct.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr0" <<"[dm-rdr0='" <<dm_rdr0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr0.is_set || is_set(dm_rdr0.yfilter)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.yfilter)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
        dm_rdr0.value_namespace = name_space;
        dm_rdr0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
        dm_rdr_pct.value_namespace = name_space;
        dm_rdr_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0.yfilter = yfilter;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr-pct")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::has_data() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_data())
            return true;
    }
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::has_operation() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rad-dis")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis>();
        c->parent = this;
        rad_dis.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rad_dis)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rad-dis" || name == "eigrp")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::RadDis()
    :
    rad_dis{YType::uint8, "rad-dis"}
{

    yang_name = "rad-dis"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::~RadDis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return rad_dis.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rad_dis.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rad-dis" <<"[rad-dis='" <<rad_dis <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rad_dis.is_set || is_set(rad_dis.yfilter)) leaf_name_data.push_back(rad_dis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rad-dis")
    {
        rad_dis = value;
        rad_dis.value_namespace = name_space;
        rad_dis.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rad-dis")
    {
        rad_dis.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "rad-dis")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    ipv40{YType::str, "ipv40"}
{

    yang_name = "ipv4"; yang_parent_name = "rad-dis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::has_data() const
{
    return ipv4.is_set
	|| ipv40.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv40.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv40.is_set || is_set(ipv40.yfilter)) leaf_name_data.push_back(ipv40.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv40")
    {
        ipv40 = value;
        ipv40.value_namespace = name_space;
        ipv40.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv40")
    {
        ipv40.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv40")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::Eigrp_()
{

    yang_name = "eigrp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "di-rt")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt>();
        c->parent = this;
        di_rt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : di_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::DiRt()
    :
    di_rt{YType::uint8, "di-rt"},
    di_rt0{YType::uint8, "di-rt0"}
{

    yang_name = "di-rt"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::~DiRt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::has_data() const
{
    return di_rt.is_set
	|| di_rt0.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(di_rt.yfilter)
	|| ydk::is_set(di_rt0.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "di-rt" <<"[di-rt='" <<di_rt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (di_rt.is_set || is_set(di_rt.yfilter)) leaf_name_data.push_back(di_rt.get_name_leafdata());
    if (di_rt0.is_set || is_set(di_rt0.yfilter)) leaf_name_data.push_back(di_rt0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "di-rt")
    {
        di_rt = value;
        di_rt.value_namespace = name_space;
        di_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-rt0")
    {
        di_rt0 = value;
        di_rt0.value_namespace = name_space;
        di_rt0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "di-rt")
    {
        di_rt.yfilter = yfilter;
    }
    if(value_path == "di-rt0")
    {
        di_rt0.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt" || name == "di-rt0")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::DistributeList()
    :
    gateway(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway>())
	,prefix(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix>())
	,route_map(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap>())
{
    gateway->parent = this;
    prefix->parent = this;
    route_map->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::has_data() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_data())
            return true;
    }
    return (gateway !=  nullptr && gateway->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eig-filt")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt>();
        c->parent = this;
        eig_filt.push_back(c);
        return c;
    }

    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : eig_filt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eig-filt" || name == "gateway" || name == "prefix" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::EigFilt()
    :
    eig_filt{YType::str, "eig-filt"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{

    yang_name = "eig-filt"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::~EigFilt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::has_data() const
{
    return eig_filt.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eig_filt.yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eig-filt" <<"[eig-filt='" <<eig_filt <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eig_filt.is_set || is_set(eig_filt.yfilter)) leaf_name_data.push_back(eig_filt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eig-filt")
    {
        eig_filt = value;
        eig_filt.value_namespace = name_space;
        eig_filt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eig-filt")
    {
        eig_filt.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "eig-filt")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::In()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "in"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::Out()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "out"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::Gateway()
{

    yang_name = "gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::~Gateway()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::has_data() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::has_operation() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-list")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList>();
        c->parent = this;
        gw_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : gw_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::GwList()
    :
    gw_list{YType::str, "gw-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "gw-list"; yang_parent_name = "gateway"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::~GwList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::has_data() const
{
    return gw_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gw_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-list" <<"[gw-list='" <<gw_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gw_list.is_set || is_set(gw_list.yfilter)) leaf_name_data.push_back(gw_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gw-list")
    {
        gw_list = value;
        gw_list.value_namespace = name_space;
        gw_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gw-list")
    {
        gw_list.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::Prefix()
{

    yang_name = "prefix"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::~Prefix()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::has_data() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::has_operation() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pl-name")
    {
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName>();
        c->parent = this;
        pl_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pl_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::PlName()
    :
    pl_name{YType::str, "pl-name"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "pl-name"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::~PlName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::has_data() const
{
    return pl_name.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pl_name.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pl-name" <<"[pl-name='" <<pl_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pl_name.is_set || is_set(pl_name.yfilter)) leaf_name_data.push_back(pl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pl-name")
    {
        pl_name = value;
        pl_name.value_namespace = name_space;
        pl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pl-name")
    {
        pl_name.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name" || name == "gateway" || name == "in" || name == "out")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Eigrp::AddressFamily::Type::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Router::Eigrp::AddressFamily::Type::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpList::UnicastMulticast::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpList::UnicastMulticast::multicast {1, "multicast"};

const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpVrfList::UnicastMulticast::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpVrfList::UnicastMulticast::multicast {1, "multicast"};


}
}

