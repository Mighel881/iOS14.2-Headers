/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {

	BOOL mIsEscher;
	NSMutableDictionary* mAdjustValues;

}
-(id)init;
-(id)description;
-(int)type;
-(id)adjustValues;
-(id)equivalentCustomGeometry;
-(BOOL)isEscher;
-(int)adjustValueAtIndex:(unsigned)arg1 ;
-(void)setIsEscher:(BOOL)arg1 ;
-(unsigned long long)adjustValueCount;
-(BOOL)hasAdjustValueAtIndex:(unsigned)arg1 ;
-(void)setAdjustValue:(int)arg1 atIndex:(unsigned)arg2 ;
@end
