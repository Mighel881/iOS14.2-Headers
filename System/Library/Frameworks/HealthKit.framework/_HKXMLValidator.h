/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthKit/HealthKit-Structs.h>
@interface _HKXMLValidator : NSObject {

	xmlSchemaRef _xsdSchema;

}
+(id)validatorWithXSD:(id)arg1 ;
+(id)validatorWithPathToXSD:(id)arg1 ;
-(id)_initWithSchema:(xmlSchemaRef)arg1 ;
-(BOOL)validateXML:(id)arg1 simpleError:(id*)arg2 detailedErrors:(id*)arg3 ;
-(void)dealloc;
@end

