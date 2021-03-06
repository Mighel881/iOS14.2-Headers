/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSError, NSString;


@protocol JFXMediaDataReader <NSObject>
@property (nonatomic,readonly) SCD_Struct_JF4 readableTimeRange; 
@property (assign,nonatomic) BOOL isScrubbing; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long signPostID; 
@property (nonatomic,readonly) NSString * name; 
@required
-(long long)status;
-(void)setIsScrubbing:(BOOL)arg1;
-(NSError *)error;
-(BOOL)isScrubbing;
-(NSString *)name;
-(BOOL)beginReadingAtTimeRange:(SCD_Struct_JF4)arg1;
-(BOOL)beginReading;
-(SCD_Struct_JF4)readableTimeRange;
-(unsigned long long)signPostID;

@end

