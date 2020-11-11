/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject {

	NSUUID* _UUID;
	/*^block*/id _updateBlock;

}

@property (retain) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (copy) id updateBlock;               //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(NSUUID *)UUID;
@end
