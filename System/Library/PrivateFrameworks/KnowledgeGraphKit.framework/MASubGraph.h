/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MABaseGraph, NSMutableDictionary;

@interface MASubGraph : NSObject {

	MABaseGraph* _graph;
	NSMutableDictionary* _nodesByIdentifier;
	NSMutableDictionary* _nodesByLabel;
	NSMutableDictionary* _nodesByName;
	NSMutableDictionary* _edgesByIdentifier;
	NSMutableDictionary* _edgesByLabel;
	NSMutableDictionary* _edgesByName;
	NSMutableDictionary* _nodesByNameGroupByNodes;

}

@property (nonatomic,readonly) MABaseGraph * graph;              //@synthesize graph=_graph - In the implementation block
+(id)subGraphWithGraph:(id)arg1 ;
+(id)subGraphIntersectionsWithSubGraphs:(id)arg1 ;
-(MABaseGraph *)graph;
-(unsigned long long)nodesCount;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(id)init;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(id)description;
-(id)edgesForLabel:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)edgesCount;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(id)edgesLabels;
-(id)allNodes;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)allEdges;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)nodesLabels;
-(id)nodesForName:(id)arg1 ;
-(id)nodesForName:(id)arg1 fromNode:(id)arg2 ;
-(id)edgesForName:(id)arg1 ;
-(id)edgesNames;
-(id)nodesNames;
-(void)enumerateNodesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesWithName:(id)arg1 fromNode:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)allNamedNodes;
-(id)graphRepresentation;
-(void)mergeWithSubGraph:(id)arg1 ;
-(void)addNodes:(id)arg1 withName:(id)arg2 ;
-(void)_addNode:(id)arg1 withName:(id)arg2 ;
-(void)_addNode:(id)arg1 withName:(id)arg2 forKeyNode:(id)arg3 ;
-(id)nodesForNames:(id)arg1 ;
-(unsigned long long)nodesCountForName:(id)arg1 ;
-(unsigned long long)nodesCountForName:(id)arg1 fromNode:(id)arg2 ;
-(void)enumerateNodesByNameUsingBlock:(/*^block*/id)arg1 ;
-(void)addEdges:(id)arg1 withName:(id)arg2 ;
-(void)_addEdge:(id)arg1 withName:(id)arg2 ;
-(unsigned long long)edgesCountForName:(id)arg1 ;
-(id)allNamedEdges;
-(void)enumerateEdgesByNameUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
