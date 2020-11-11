/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@interface OADIndexedColor : OADColor {

	unsigned long long mIndex;

}
+(id)indexedColorWithIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)index;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)colorFromPalette:(id)arg1 ;
@end
