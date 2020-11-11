/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSBagKeySet, NSArray, NSDictionary, NSDate, NSString, AMSProcessInfo;

@interface AMSBagFrozenDataSourceBuilder : NSObject {

	AMSBagKeySet* _bagKeySet;
	NSArray* _cookies;
	NSDictionary* _data;
	NSDate* _expirationDate;
	NSString* _profile;
	NSString* _profileVersion;
	AMSProcessInfo* _processInfo;

}

@property (nonatomic,retain) AMSBagKeySet * bagKeySet;                  //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (nonatomic,retain) NSArray * cookies;                         //@synthesize cookies=_cookies - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                 //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
-(void)setProfile:(NSString *)arg1 ;
-(AMSProcessInfo *)processInfo;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(NSArray *)cookies;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setCookies:(NSArray *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)createFrozenDataSource;
-(NSString *)profile;
-(NSDictionary *)data;
-(id)initWithFrozenDataSource:(id)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(NSString *)profileVersion;
-(AMSBagKeySet *)bagKeySet;
-(NSDate *)expirationDate;
-(void)setBagKeySet:(AMSBagKeySet *)arg1 ;
@end
