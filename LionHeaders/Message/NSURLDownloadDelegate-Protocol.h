/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */
#import "NSU

@protocol NSURLDownloadDelegate <NSObject>

@optional
- (void)downloadDidBegin:(id)arg1;
- (id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)download:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (BOOL)downloadShouldUseCredentialStorage:(id)arg1;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)download:(id)arg1 didCreateDestination:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
@end

