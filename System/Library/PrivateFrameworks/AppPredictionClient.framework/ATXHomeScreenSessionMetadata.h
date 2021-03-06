/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXHomeScreenSessionMetadata : NSObject <NSSecureCoding> {

	BOOL _isWidgetInTodayView;
	NSString* _widgetUniqueId;
	NSString* _widgetBundleId;

}

@property (nonatomic,retain) NSString * widgetUniqueId;              //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
@property (nonatomic,retain) NSString * widgetBundleId;              //@synthesize widgetBundleId=_widgetBundleId - In the implementation block
@property (assign,nonatomic) BOOL isWidgetInTodayView;               //@synthesize isWidgetInTodayView=_isWidgetInTodayView - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)widgetUniqueId;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)widgetBundleId;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsWidgetInTodayView:(BOOL)arg1 ;
-(BOOL)isWidgetInTodayView;
-(void)setWidgetBundleId:(NSString *)arg1 ;
-(id)initWithWidgetUniqueId:(id)arg1 widgetBundleId:(id)arg2 isWidgetInTodayView:(BOOL)arg3 ;
-(BOOL)isEqualToATXHomeScreenSessionMetadata:(id)arg1 ;
@end

