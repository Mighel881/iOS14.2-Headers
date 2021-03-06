/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/NSLayoutConstraint.h>

@class NSISVariable;

@interface NSErrorVariableConstraint : NSLayoutConstraint {

	NSISVariable* _errorVariable;
	double _errorValue;

}
-(id)initWithVariable:(id)arg1 value:(double)arg2 ;
-(id)constrainedConstraint;
-(BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(void)dealloc;
@end

