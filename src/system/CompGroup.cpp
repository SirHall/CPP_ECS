#include "CompGroup.hpp"


CompGroup::CompGroup(std::vector<std::size_t> patternHashes){
    for(unsigned int i = 0; i < patternHashes.size(); i++)
        compHashes.push_back(patternHashes.at(i));
}

CompGroup::~CompGroup(){
    compHashes.~vector();
}

std::vector<std::shared_ptr<Component>> CompGroup::GetGroupAt(unsigned int i){
    return matchingCompGroups.at(i);
}

unsigned int CompGroup::Size(){
    return matchingCompGroups.size();
}

bool CompGroup::DoesEntityMatch(std::shared_ptr<Entity> entity){
    return entity->MatchesComponentPattern(compHashes);
}

std::vector<std::size_t> CompGroup::GetCompHashes(){
    return compHashes;
}