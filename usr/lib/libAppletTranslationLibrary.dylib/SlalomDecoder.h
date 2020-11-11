/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAppletTranslationLibrary.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/ATLStatefulDecoder.h>

@class NSMutableArray, NSNumber;

@interface SlalomDecoder : NSObject <ATLStatefulDecoder> {

	BOOL _eotInProgress;
	NSMutableArray* _hciArray;
	NSNumber* _serviceProvider;

}
+(id)sharedInstance;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)init;
-(void)cleanup;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)parseStartEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
-(id)parseTransactionEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
-(id)parseDeselectEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
-(id)parseEndEvent:(id)arg1 withApplet:(id)arg2 withTransceiver:(id)arg3 error:(id*)arg4 ;
-(id)DecodeStartE1TLV:(const SCD_Struct_He0*)arg1 error:(id*)arg2 ;
-(id)DecodeTransactionE1TLV:(const SCD_Struct_He0*)arg1 error:(id*)arg2 ;
@end
