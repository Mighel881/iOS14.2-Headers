/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PromotedContent/PromotedContent-Structs.h>
#import <PromotedContent/APPCContentRepresentation.h>

@class NSString;

@interface APPCNativeRepresentation : APPCContentRepresentation {

	 articleID;
	 articleTitle;
	 advertiserName;
	 campaignData;

}

@property (readonly,nonatomic) NSString * articleID; 
@property (readonly,nonatomic) NSString * articleTitle; 
@property (readonly,nonatomic) NSString * advertiserName; 
@property (readonly,nonatomic) NSString * campaignData; 
-(NSString *)articleID;
-(NSString *)campaignData;
-(NSString *)articleTitle;
-(NSString *)advertiserName;
-(id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 privacyMarkerPosition:(long long)arg4 articleID:(id)arg5 articleTitle:(id)arg6 adSponsor:(id)arg7 campaignData:(id)arg8 adSize:(CGSize)arg9 ;
@end

