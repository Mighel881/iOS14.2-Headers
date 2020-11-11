/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libBasebandManagerICE.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libBasebandManagerICE.dylib/libBasebandManagerICE.dylib-Structs.h>
#import <libobjc.A.dylib/CMCallHandednessDelegate.h>

@class NSString;

@interface CMHandDetectionDelegate : NSObject <CMCallHandednessDelegate> {

	block<void ()(CMCallHandedness)>* fCallBack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callHandednessManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(void)registerHandler:(block<void ()(CMCallHandedness)>*)arg1 ;
@end
