/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSHashTable;

@interface PUTilingDataSource : NSObject {

	NSString* _identifier;
	NSHashTable* __changeObservers;

}

@property (nonatomic,readonly) NSHashTable * _changeObservers;              //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(NSHashTable *)_changeObservers;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)enumerateIndexPathsStartingAtIndexPath:(id)arg1 reverseDirection:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

