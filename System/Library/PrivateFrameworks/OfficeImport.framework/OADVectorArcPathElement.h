/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADVectorArcPathElement : OADPathElement {

	OADAdjustCoord mLeft;
	OADAdjustCoord mTop;
	OADAdjustCoord mRight;
	OADAdjustCoord mBottom;
	OADAdjustPoint mStartVector;
	OADAdjustPoint mEndVector;
	BOOL mClockwise;
	BOOL mConnectedToPrevious;

}
-(OADAdjustCoord)bottom;
-(OADAdjustCoord)top;
-(OADAdjustCoord)right;
-(OADAdjustCoord)left;
-(BOOL)clockwise;
-(id)initWithLeft:(OADAdjustCoord)arg1 top:(OADAdjustCoord)arg2 right:(OADAdjustCoord)arg3 bottom:(OADAdjustCoord)arg4 startVector:(OADAdjustPoint)arg5 endVector:(OADAdjustPoint)arg6 clockwise:(BOOL)arg7 connectedToPrevious:(BOOL)arg8 ;
-(BOOL)connectedToPrevious;
-(OADAdjustPoint)startVector;
-(OADAdjustPoint)endVector;
@end

