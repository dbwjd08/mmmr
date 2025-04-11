package com.ssafy.mmmr.account.dto;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Getter;

@Getter
@Builder
@AllArgsConstructor
public class LogInResponseDto {

	private String accessToken;
	private String refreshToken;

}
