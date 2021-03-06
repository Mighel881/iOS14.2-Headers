/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSUtility/TSUProgress.h>

@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {

	NSProgress* _NSProgress;
	NSArray* _NSProgressObservers;

}
-(void)setMessage:(id)arg1 ;
-(id)init;
-(id)message;
-(double)value;
-(double)maxValue;
-(BOOL)isIndeterminate;
-(id)initForSubclass;
-(id)initWithNSProgress:(id)arg1 ;
@end

