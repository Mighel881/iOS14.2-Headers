/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaMetadataReader.h>

@protocol JFXMediaMetadataReader, OS_dispatch_queue;
@class NSError, JFXARMetadataMediaReaderItem, NSObject, NSString;

@interface JFXARMetadataMediaReader : NSObject <JFXMediaMetadataReader> {

	id<JFXMediaMetadataReader> _reader;
	NSError* _lastDecodeError;
	JFXARMetadataMediaReaderItem* _cachedARMetadata;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,readonly) id<JFXMediaMetadataReader> reader;                              //@synthesize reader=_reader - In the implementation block
@property (nonatomic,retain) NSError * lastDecodeError;                                        //@synthesize lastDecodeError=_lastDecodeError - In the implementation block
@property (nonatomic,retain) JFXARMetadataMediaReaderItem * cachedARMetadata;                  //@synthesize cachedARMetadata=_cachedARMetadata - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 readableTimeRange; 
@property (assign,nonatomic) BOOL isScrubbing; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long signPostID; 
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id<JFXMediaMetadataReader>)reader;
-(long long)status;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(NSError *)error;
-(BOOL)isScrubbing;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(id)initWithMetadataReader:(id)arg1 ;
-(BOOL)beginReadingAtTimeRange:(SCD_Struct_JF4)arg1 ;
-(BOOL)beginReading;
-(SCD_Struct_JF4)readableTimeRange;
-(unsigned long long)signPostID;
-(id)arMetadataItemForTime:(SCD_Struct_JF3)arg1 ;
-(JFXARMetadataMediaReaderItem *)cachedARMetadata;
-(id)metadataForTime:(SCD_Struct_JF3)arg1 ;
-(id)JFX_ARMetadataFromMetadataReaderItem:(id)arg1 ;
-(void)setCachedARMetadata:(JFXARMetadataMediaReaderItem *)arg1 ;
-(void)setLastDecodeError:(NSError *)arg1 ;
-(NSError *)lastDecodeError;
@end
