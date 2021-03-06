/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedRenditionInfo : NSObject {

	void* _bitmap;
	const renditionkeyfmt* _keyFormat;

}
-(BOOL)diverseContentPresentForAttribute:(int)arg1 ;
-(id)debugDescription;
-(id)bitwiseAndWith:(id)arg1 ;
-(id)archivedData;
-(BOOL)isEqualToNamedRenditionInfo:(id)arg1 ;
-(BOOL)contentPresentForAttribute:(int)arg1 ;
-(unsigned short)getValueOfAttribute:(int)arg1 ;
-(id)description;
-(void)incrementIndex:(unsigned long long*)arg1 inValues:(id)arg2 forAttribute:(int)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)decrementValue:(long long*)arg1 forAttribute:(int)arg2 ;
-(void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(unsigned long long)numberOfBitsSet;
-(void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(int)attributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(id)initWithKeyFormat:(const renditionkeyfmt*)arg1 ;
-(unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2 ;
-(BOOL)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2 ;
-(id)initWithData:(id)arg1 andKeyFormat:(const renditionkeyfmt*)arg2 ;
-(void)dealloc;
@end

