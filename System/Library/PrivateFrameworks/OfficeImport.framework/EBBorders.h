/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBBorders : NSObject
+(int)convertXlBorderEnumToED:(int)arg1 ;
+(int)convertXlDiagStyleEnumToED:(int)arg1 ;
+(int)convertEDBorderEnumToXl:(int)arg1 ;
+(int)convertEDDiagonalEnumToXl:(int)arg1 ;
+(id)edBordersFromXlXf:(XlXf*)arg1 edResources:(id)arg2 ;
+(id)edBordersFromXlDXf:(XlDXf*)arg1 edResources:(id)arg2 ;
@end
