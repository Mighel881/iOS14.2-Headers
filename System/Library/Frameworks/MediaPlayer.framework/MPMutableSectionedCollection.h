/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedCollection.h>

@interface MPMutableSectionedCollection : MPSectionedCollection
-(void)appendItems:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(void)removeAllObjects;
-(void)replaceSectionAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)_initializeAsEmptySectionedCollection;
-(void)moveSectionFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)appendSection:(id)arg1 ;
-(void)replaceObjectAtIndexPath:(id)arg1 withObject:(id)arg2 ;
-(void)replaceItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)replaceSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSectionAtIndex:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendItem:(id)arg1 ;
-(void)insertItem:(id)arg1 atIndexPath:(id)arg2 ;
@end
