/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdPlatformsCommon/AdPlatformsCommon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, APTapAction, NSURL, NSError;

@interface APRepresentationData : NSObject <NSSecureCoding> {

	BOOL _skipEnabled;
	BOOL _unbranded;
	NSUUID* _identifier;
	NSString* _contentDataIdentifier;
	long long _placementType;
	long long _desiredPosition;
	unsigned long long _privacyMarkerPosition;
	APTapAction* _tapAction;
	NSString* _adTag;
	NSURL* _videoURL;
	double _duration;
	double _skipThreshold;
	double _bitrate;
	unsigned long long _signalStrength;
	long long _connectionType;
	NSString* _articleID;
	NSString* _articleTitle;
	NSString* _advertiserName;
	NSString* _campaignData;
	NSError* _error;
	SCD_Struct_AP2 _size;

}

@property (retain) NSString * contentDataIdentifier;                      //@synthesize contentDataIdentifier=_contentDataIdentifier - In the implementation block
@property (assign) long long placementType;                               //@synthesize placementType=_placementType - In the implementation block
@property (assign) long long desiredPosition;                             //@synthesize desiredPosition=_desiredPosition - In the implementation block
@property (assign) unsigned long long privacyMarkerPosition;              //@synthesize privacyMarkerPosition=_privacyMarkerPosition - In the implementation block
@property (assign) SCD_Struct_AP2 size;                                   //@synthesize size=_size - In the implementation block
@property (retain) APTapAction * tapAction;                               //@synthesize tapAction=_tapAction - In the implementation block
@property (retain) NSString * adTag;                                      //@synthesize adTag=_adTag - In the implementation block
@property (retain) NSURL * videoURL;                                      //@synthesize videoURL=_videoURL - In the implementation block
@property (assign) double duration;                                       //@synthesize duration=_duration - In the implementation block
@property (assign) double skipThreshold;                                  //@synthesize skipThreshold=_skipThreshold - In the implementation block
@property (assign) BOOL skipEnabled;                                      //@synthesize skipEnabled=_skipEnabled - In the implementation block
@property (assign) BOOL unbranded;                                        //@synthesize unbranded=_unbranded - In the implementation block
@property (assign) double bitrate;                                        //@synthesize bitrate=_bitrate - In the implementation block
@property (assign) unsigned long long signalStrength;                     //@synthesize signalStrength=_signalStrength - In the implementation block
@property (assign) long long connectionType;                              //@synthesize connectionType=_connectionType - In the implementation block
@property (retain) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
@property (retain) NSString * articleTitle;                               //@synthesize articleTitle=_articleTitle - In the implementation block
@property (retain) NSString * advertiserName;                             //@synthesize advertiserName=_advertiserName - In the implementation block
@property (retain) NSString * campaignData;                               //@synthesize campaignData=_campaignData - In the implementation block
@property (retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (readonly) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)mockRepresentationWithType:(long long)arg1 contentData:(id)arg2 ;
-(void)setConnectionType:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(void)setSize:(SCD_Struct_AP2)arg1 ;
-(long long)connectionType;
-(id)init;
-(NSString *)articleID;
-(NSString *)adTag;
-(NSError *)error;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSignalStrength:(unsigned long long)arg1 ;
-(NSUUID *)identifier;
-(void)setError:(NSError *)arg1 ;
-(SCD_Struct_AP2)size;
-(NSURL *)videoURL;
-(double)bitrate;
-(unsigned long long)signalStrength;
-(id)initWithCoder:(id)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(unsigned long long)privacyMarkerPosition;
-(double)duration;
-(long long)desiredPosition;
-(APTapAction *)tapAction;
-(double)skipThreshold;
-(BOOL)skipEnabled;
-(BOOL)unbranded;
-(long long)placementType;
-(NSString *)campaignData;
-(void)setCampaignData:(NSString *)arg1 ;
-(void)setContentDataIdentifier:(NSString *)arg1 ;
-(void)setPlacementType:(long long)arg1 ;
-(void)setArticleTitle:(NSString *)arg1 ;
-(void)setAdvertiserName:(NSString *)arg1 ;
-(void)setAdTag:(NSString *)arg1 ;
-(void)setBitrate:(double)arg1 ;
-(NSString *)articleTitle;
-(NSString *)advertiserName;
-(NSString *)contentDataIdentifier;
-(void)setDesiredPosition:(long long)arg1 ;
-(void)setPrivacyMarkerPosition:(unsigned long long)arg1 ;
-(void)setTapAction:(APTapAction *)arg1 ;
-(void)setSkipThreshold:(double)arg1 ;
-(void)setSkipEnabled:(BOOL)arg1 ;
-(void)setUnbranded:(BOOL)arg1 ;
@end

