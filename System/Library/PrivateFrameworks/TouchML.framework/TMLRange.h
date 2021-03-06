/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLRangeJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLRange : NSObject <TMLRangeJSExports, NSCopying> {

	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long location; 
@property (nonatomic,readonly) unsigned long long length; 
+(void)initializeJSContext:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(unsigned long long)location;
-(unsigned long long)length;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)NSRangeValue;
@end

