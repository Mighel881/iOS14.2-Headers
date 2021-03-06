/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString, NSURL;

@interface BLTHashCacheItem : NSObject {

	NSData* _MD5;
	NSString* _identifier;
	NSData* _data;
	NSURL* _url;

}

@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)hashCacheItemWithData:(id)arg1 URL:(id)arg2 identifier:(id)arg3 ;
-(id)MD5;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(NSString *)identifier;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)data;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 data:(id)arg2 identifier:(id)arg3 ;
@end

