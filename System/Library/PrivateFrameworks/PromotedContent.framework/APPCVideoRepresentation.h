/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PromotedContent/APPCContentRepresentation.h>
#import <libobjc.A.dylib/APPCPromotableVideoRepresentation.h>

@class NSURL;

@interface APPCVideoRepresentation : APPCContentRepresentation <APPCPromotableVideoRepresentation> {

	 fileSize;
	 skipThreshold;
	 skipEnabled;
	 unbranded;
	 bitrate;
	 signalStrength;
	 connectionType;
	 duration;

}

@property (readonly,nonatomic) long long fileSize; 
@property (readonly,nonatomic) double skipThreshold; 
@property (readonly,nonatomic) BOOL skipEnabled; 
@property (readonly,nonatomic) BOOL unbranded; 
@property (readonly,nonatomic) double bitrate; 
@property (readonly,nonatomic) unsigned long long signalStrength; 
@property (readonly,nonatomic) long long connectionType; 
@property (copy,nonatomic) NSURL * videoURL; 
-(long long)connectionType;
-(NSURL *)videoURL;
-(double)bitrate;
-(unsigned long long)signalStrength;
-(long long)fileSize;
-(void)setVideoURL:(NSURL *)arg1 ;
-(double)skipThreshold;
-(BOOL)skipEnabled;
-(BOOL)unbranded;
-(id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 videoURL:(id)arg4 duration:(double)arg5 fileSize:(long long)arg6 skipThreshold:(double)arg7 skipEnabled:(BOOL)arg8 unbranded:(BOOL)arg9 bitrate:(double)arg10 connectionType:(long long)arg11 signalStrength:(unsigned long long)arg12 tapAction:(id)arg13 ;
@end
