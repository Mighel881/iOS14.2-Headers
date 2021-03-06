/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconIndexNodeObserver.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol SBIconIndexMutableListObserver;
@class NSMutableArray, NSMapTable, NSString;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration> {

	NSMutableArray* _nodes;
	NSMapTable* _index;
	id<SBIconIndexMutableListObserver> _observer;

}

@property (assign,nonatomic,__weak) id<SBIconIndexMutableListObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) id<SBIconIndexNode> firstNode; 
@property (nonatomic,readonly) id<SBIconIndexNode> lastNode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(BOOL)containsNode:(id)arg1 ;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)setObserver:(id<SBIconIndexMutableListObserver>)arg1 ;
-(id)indexesOfNodesPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfNodePassingTest:(/*^block*/id)arg1 ;
-(id)containedNodeIdentifiers;
-(void)nodeDidMoveContainedNodes:(id)arg1 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)removeAllNodes;
-(id)indexDescriptionWithPrefix:(id)arg1 ;
-(void)moveNodes:(id)arg1 toContiguousIndicesStartingAt:(unsigned long long)arg2 ;
-(unsigned long long)indexOfNode:(id)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(id<SBIconIndexNode>)firstNode;
-(void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)nodes;
-(void)enumerateNodesAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(id<SBIconIndexNode>)lastNode;
-(void)removeNodesInRange:(NSRange)arg1 ;
-(void)replaceNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2 ;
-(unsigned long long)indexOfNodeWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfNodeAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)nodesInRange:(NSRange)arg1 ;
-(void)removeLastNode;
-(void)removeNodeAtIndex:(unsigned long long)arg1 ;
-(void)removeNodesAtIndexes:(id)arg1 ;
-(void)removeNodesInArray:(id)arg1 ;
-(id)nodesContainingNodeIdentifier:(id)arg1 ;
-(void)enumerateNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)nodesAtIndexes:(id)arg1 ;
-(id<SBIconIndexMutableListObserver>)observer;
-(void)addNode:(id)arg1 ;
-(void)enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insertNodes:(id)arg1 atIndexes:(id)arg2 ;
-(void)dealloc;
@end

