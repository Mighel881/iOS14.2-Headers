/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface OKSettingsTransactionItem : NSObject {

	/*^block*/id _updateBlock;
	NSString* key;
	NSString* _key;

}

@property (nonatomic,copy) id updateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(NSString *)key;
-(id)init;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
@end
