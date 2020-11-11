/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OITSUCustomFormatData;

@interface OITSUCustomFormatCondition : NSObject <NSCopying> {

	int _conditionType;
	double _conditionValue;
	OITSUCustomFormatData* _data;

}

@property (nonatomic,readonly) int conditionType;                         //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,readonly) double conditionValue;                     //@synthesize conditionValue=_conditionValue - In the implementation block
@property (nonatomic,readonly) OITSUCustomFormatData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(OITSUCustomFormatData *)data;
-(int)conditionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)conditionValue;
-(id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
@end
