/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSDate, AMSProcessInfo, NSString;

@interface AMSSnapshotBagBuilder : NSObject {

	NSDictionary* _data;
	NSDate* _expirationDate;
	AMSProcessInfo* _processInfo;
	NSString* _profile;
	NSString* _profileVersion;

}

@property (nonatomic,retain) NSDictionary * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSString * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                 //@synthesize profileVersion=_profileVersion - In the implementation block
-(void)setProfile:(NSString *)arg1 ;
-(AMSProcessInfo *)processInfo;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(id)buildWithError:(id*)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)profile;
-(NSDictionary *)data;
-(void)setProfileVersion:(NSString *)arg1 ;
-(NSString *)profileVersion;
-(NSDate *)expirationDate;
@end

