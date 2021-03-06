/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface AVAssetSegmentReport : NSObject {

	long long _segmentType;
	NSMutableArray* _trackReports;

}

@property (nonatomic,readonly) long long segmentType;               //@synthesize segmentType=_segmentType - In the implementation block
@property (nonatomic,readonly) NSArray * trackReports;              //@synthesize trackReports=_trackReports - In the implementation block
-(id)initWithFigSegmentReportDictionary:(id)arg1 ;
-(long long)segmentType;
-(NSArray *)trackReports;
-(void)dealloc;
@end

