/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, NSDictionary, NSError;


@protocol ACMTicketVerificationResponse <NSObject>
@property (retain,readonly) NSNumber * personDSID; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (retain) id userInfo; 
@required
-(id)userInfo;
-(NSError *)error;
-(void)setUserInfo:(id)arg1;
-(void)setError:(id)arg1;
-(NSDictionary *)rawResponseData;
-(void)setRawResponseData:(id)arg1;
-(NSNumber *)personDSID;

@end

