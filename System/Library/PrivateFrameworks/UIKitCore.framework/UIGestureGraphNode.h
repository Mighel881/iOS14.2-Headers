/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureGraphElement.h>

@class NSMutableSet, NSMapTable, NSSet;

@interface UIGestureGraphNode : UIGestureGraphElement {

	NSMutableSet* _inEdges;
	NSMutableSet* _outEdges;
	NSMutableSet* _inOutEdges;
	NSMapTable* _edgesByLabel;

}

@property (nonatomic,readonly) unsigned long long edgeCount; 
@property (nonatomic,readonly) NSSet * allEdges; 
@property (nonatomic,readonly) NSSet * inEdges; 
@property (nonatomic,readonly) NSSet * outEdges; 
@property (nonatomic,readonly) NSSet * inOutEdges; 
-(void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hasEdgeFromNode:(id)arg1 ;
-(NSSet *)inEdges;
-(BOOL)hasEdgeTowardNode:(id)arg1 ;
-(BOOL)hasEdgeBetweenNode:(id)arg1 ;
-(id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(BOOL)isInEdge:(id)arg1 ;
-(void)_removeEdge:(id)arg1 ;
-(void)_addEdge:(id)arg1 ;
-(void)enumerateNeighborNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)inOutEdges;
-(id)description;
-(id)edgesForLabel:(id)arg1 ;
-(NSSet *)outEdges;
-(unsigned long long)edgeCountForLabel:(id)arg1 ;
-(unsigned long long)typeOfEdge:(id)arg1 ;
-(BOOL)isInOutEdge:(id)arg1 ;
-(unsigned long long)edgeCount;
-(void)enumerateEdgesFromNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSSet *)allEdges;
-(BOOL)isOutEdge:(id)arg1 ;
@end
