/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PKDiagnostics : NSObject
+(id)_secureElementData;
+(id)_metadataForCardAtURL:(id)arg1 ;
+(void)_createDiagnosticJsonWithDictionary:(id)arg1 hasLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)generateDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(void)generateZippedDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(id)generateUbiquityDiagnosticsFile:(BOOL)arg1 ;
+(void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2 ;
+(id)_allPasses;
@end

