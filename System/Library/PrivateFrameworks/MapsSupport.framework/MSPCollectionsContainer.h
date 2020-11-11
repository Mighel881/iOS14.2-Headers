/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MSPContainer.h>

@class MSPContainer;

@interface MSPCollectionsContainer : MSPContainer {

	MSPContainer* _itemContainer;

}

@property (nonatomic,retain) MSPContainer * itemContainer;              //@synthesize itemContainer=_itemContainer - In the implementation block
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(void)setItemContainer:(MSPContainer *)arg1 ;
-(id)queryWithDelegate:(id)arg1 ;
-(MSPContainer *)itemContainer;
-(id)initWithPersister:(id)arg1 itemContainer:(id)arg2 ;
@end
