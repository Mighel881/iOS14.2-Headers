/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class CLLocation;

@interface PAMediaConversionServiceSetLocationImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	CLLocation* _location;

}

@property (retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithLocation:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end
