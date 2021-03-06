/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSData;


@protocol MSVSegmentedSubEncoder <NSObject>
@property (nonatomic,readonly) BOOL hasTopLevelData; 
@property (readonly) NSData * encodedData; 
@required
-(void)finishEncodingPartialTopLevelObject;
-(void)beginEncodingPartialTopLevelObject:(id)arg1;
-(BOOL)hasTopLevelData;
-(NSData *)encodedData;

@end

