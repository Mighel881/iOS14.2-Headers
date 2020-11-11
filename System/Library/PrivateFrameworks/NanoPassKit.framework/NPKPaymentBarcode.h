/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData, NSArray;

@interface NPKPaymentBarcode : NSObject {

	NSString* _barcodeIdentifier;
	unsigned long long _state;
	NSData* _decryptedBarcodeCredential;
	NSArray* _barcodes;

}

@property (nonatomic,retain) NSString * barcodeIdentifier;                     //@synthesize barcodeIdentifier=_barcodeIdentifier - In the implementation block
@property (nonatomic,retain) NSData * decryptedBarcodeCredential;              //@synthesize decryptedBarcodeCredential=_decryptedBarcodeCredential - In the implementation block
@property (nonatomic,retain) NSArray * barcodes;                               //@synthesize barcodes=_barcodes - In the implementation block
@property (assign,nonatomic) unsigned long long state;                         //@synthesize state=_state - In the implementation block
-(NSArray *)barcodes;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(NSString *)barcodeIdentifier;
-(void)setBarcodeIdentifier:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)decryptedBarcodeCredential;
-(id)initWithBarcodeIdentifier:(id)arg1 decryptedBarcodeCredential:(id)arg2 error:(id)arg3 ;
-(void)setDecryptedBarcodeCredential:(NSData *)arg1 ;
-(void)setBarcodes:(NSArray *)arg1 ;
@end
